/* Project done by:
    Muhammad Hussain Javed, 21K-3584
    Vania Abbas, 21K-4753
*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#define PORT 5000
#define BUFFER_SIZE 2048

int main(int argc, char** argv)
{
    if (argc != 3)
    {
        printf("Usage: <ip address> <port>\n");
        exit(1);
    }
    struct sockaddr_in server;
    int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0)
    {
        printf("Socket creation failed.\n");
        exit(1);
    }
    memset(&server, 0, sizeof(server));
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(argv[1]);
    server.sin_port = htons(PORT);
    int length_of_server = sizeof(server);
    char buf[BUFFER_SIZE];
    printf("Send a message to server: ");
    fgets(buf, BUFFER_SIZE, stdin);
    sendto(sockfd, buf, strlen(buf), 0, (struct sockaddr* )&server, length_of_server);
    char buf_from_serv[BUFFER_SIZE];
    recvfrom(sockfd, buf_from_serv, BUFFER_SIZE, 0, (struct sockaddr*)&server, &length_of_server);
    printf("The server replied: \n");
    puts(buf_from_serv);
    close(sockfd);
}