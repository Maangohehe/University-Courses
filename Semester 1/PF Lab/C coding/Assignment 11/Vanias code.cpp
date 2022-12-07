#include<stdio.h>
#include<string.h>
int wordcount(char *s);
int main(){
    char s[2000];
    int countwords;
    printf("Say something:   \n");
    gets(s);
    countwords = wordcount(s);
    printf("The total number of words are:  %d\n", countwords);
}
int wordcount(char *s)
{
   static int i, words=0;
    for(i=0;s[i]; i++){
        if(s[i]==32)
        words++;
    }
    if(i>0)
    words++;
    return words;
}
