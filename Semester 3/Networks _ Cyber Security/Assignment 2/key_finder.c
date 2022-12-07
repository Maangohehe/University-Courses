#include <stdio.h>
#include <openssl/conf.h>
#include <openssl/evp.h>
#include <openssl/err.h>
#include <openssl/bio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER 1028
#define WORD_BUFFER 3000
int decrypt(unsigned char *ciphertext, int ciphertext_len, unsigned char *key,
            unsigned char *iv, unsigned char *plaintext);
int encrypt(unsigned char *plaintext, int plaintext_len, unsigned char *key,
            unsigned char *iv, unsigned char *ciphertext);
void handleErrors(void)
{
    ERR_print_errors_fp(stderr);
    abort();
}
int main()
{
    FILE *word_file = fopen("wordlist.txt", "r");
    unsigned char* iv = "12345678910111213141516";
    unsigned char key[16];
    printf("Input a key less than 16 characters: ");
    fgets(key, 16, stdin);
    key[strlen(key)-1] = '#';
    key[strlen(key)] = '\n';
    unsigned char plaintext[BUFFER], ciphertext[BUFFER], word_list[WORD_BUFFER][18];
    printf("Input plaintext: ");
    fgets(plaintext, BUFFER, stdin);
    int plaintext_len = strlen((char*)plaintext);
    printf("Plaintext is: %s\n", plaintext);
    int cipher_text_len = encrypt(plaintext, plaintext_len, key, iv, ciphertext);
    printf("Ciphertext is: \n");
    BIO_dump_fp(stdout, (const char*)ciphertext, strlen(plaintext));
    for (int i = 0; i < WORD_BUFFER; i++)
    {
        fgets(word_list[i], 18, (FILE *)word_file);
    }
    unsigned char decrpyted_text[BUFFER];
    memset(decrpyted_text, 0, sizeof(decrpyted_text));
    int decrypted_text_len;
    const char *pound = "#";
    //Send key one by one
    for (int i = 0; i < WORD_BUFFER; i++)
    {
        // strcpy(key, word_list[i]);
        // int key_len = strlen(key);
        // key[key_len-1] = '#';
        // key[key_len] = '\n';
        decrypted_text_len = decrypt(ciphertext, cipher_text_len, key, iv, decrpyted_text);
        if (!strcmp(plaintext, decrpyted_text))
            break;
    }
    printf("Decrypted text is: %s\n", decrpyted_text);
    fclose(word_file);
    return 0;
}

int encrypt(unsigned char *plaintext, int plaintext_len, unsigned char *key,
            unsigned char *iv, unsigned char *ciphertext)
{
    EVP_CIPHER_CTX *ctx;

    int len;

    int ciphertext_len;

    /* Create and initialise the context */
    if(!(ctx = EVP_CIPHER_CTX_new()))
        handleErrors();

    /*
     * Initialise the encryption operation. IMPORTANT - ensure you use a key
     * and IV size appropriate for your cipher
     * In this example we are using 256 bit AES (i.e. a 256 bit key). The
     * IV size for *most* modes is the same as the block size. For AES this
     * is 128 bits
     */
    if(1 != EVP_EncryptInit_ex(ctx, EVP_aes_128_cbc(), NULL, key, iv))
        handleErrors();

    /*
     * Provide the message to be encrypted, and obtain the encrypted output.
     * EVP_EncryptUpdate can be called multiple times if necessary
     */
    if(1 != EVP_EncryptUpdate(ctx, ciphertext, &len, plaintext, plaintext_len))
        handleErrors();
    ciphertext_len = len;

    /*
     * Finalise the encryption. Further ciphertext bytes may be written at
     * this stage.
     */
    if(1 != EVP_EncryptFinal_ex(ctx, ciphertext + len, &len))
        handleErrors();
    ciphertext_len += len;

    /* Clean up */
    EVP_CIPHER_CTX_free(ctx);

    return ciphertext_len;
}

int decrypt(unsigned char *ciphertext, int ciphertext_len, unsigned char *key, unsigned char *iv, unsigned char *plaintext)
{
    EVP_CIPHER_CTX* ctx;
    int len;
    int plaintext_len;

    if(!(ctx = EVP_CIPHER_CTX_new()))
    {    printf("CTX Error\n");
        exit(1);
    }

    if(1 != EVP_DecryptInit_ex(ctx, EVP_aes_128_cbc(), NULL, key, iv))
    {
        printf("Decryption Error\n");
        exit(1);
    }

    if(1 != EVP_DecryptUpdate(ctx, plaintext, &len, ciphertext, ciphertext_len))
        handleErrors();
    plaintext_len = len;

    if(1 != EVP_DecryptFinal_ex(ctx, plaintext, &len))
    {
        printf("Invalid key.");
    }
    plaintext_len += len;

    EVP_CIPHER_CTX_free(ctx);

    return plaintext_len;
}