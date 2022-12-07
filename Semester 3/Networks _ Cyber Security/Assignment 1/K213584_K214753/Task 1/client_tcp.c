/* Project done by:
    Muhammad Hussain Javed, 21K-3584
    Vania Abbas, 21K-4753
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <arpa/inet.h>
#define BUFFER_SIZE 2048

int main(int argc, char** argv)
{
    //We will ask for ip address and port in command line args
    if (argc != 3)
    {
        printf("Usage: <ip address> <port>\n");
        exit(1);
    }
    int socketId, string_len;
    struct sockaddr_in server_sock;
    unsigned short port = htons(atoi(argv[2]));
    char send_to_server[BUFFER_SIZE], recieved_from_server[BUFFER_SIZE], temp[BUFFER_SIZE];
    socketId = socket(AF_INET, SOCK_DGRAM, 0);
    if (socketId < 0)
    {
        printf("Socket creation failed.\n");
        exit(1);
    }

    memset(&server_sock, 0, sizeof(server_sock));
    server_sock.sin_family = AF_INET;
    server_sock.sin_port = port;
    server_sock.sin_addr.s_addr = inet_addr(argv[1]);
    int length = sizeof(server_sock);
    printf("Send a message to server: ");
    fgets(send_to_server, BUFFER_SIZE, stdin);
    sendto(socketId, send_to_server, strlen(send_to_server), 0, (struct sockaddr *) &server_sock, length);

    if (recvfrom(socketId, recieved_from_server, BUFFER_SIZE, 0, (struct sockaddr* ) &server_sock, &length) == 0)
    {
        printf("Error reading data recieved from server.\n");
        exit(3);
    }
    printf("Data recieved from server is: ");
    puts(recieved_from_server);
    
    close(socketId);
    return 0;
}