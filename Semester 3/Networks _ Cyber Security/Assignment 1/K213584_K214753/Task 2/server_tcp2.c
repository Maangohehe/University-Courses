/* Project done by:
    Muhammad Hussain Javed, 21K-3584
    Vania Abbas, 21K-4753
*/
#include <stdio.h>
#include <sys/socket.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/time.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#define PORT 5000
#define BUFFER_SIZE 2048
#define INADDRESS_LEN 15

int main(void)
{
    int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0)
    {
        printf("socket error\n");
        exit(1);
    }
    //initialize server
    struct timeval timeout;
    timeout.tv_sec = 30;
    timeout.tv_usec = 0;
    struct sockaddr_in server, client;
    int length_of_server = sizeof(server);
    memset(&server, 0, length_of_server);
    server.sin_family = AF_INET;
    server.sin_port = htons(PORT);
    server.sin_addr.s_addr = inet_addr("127.0.0.1");

    if (bind(sockfd, (struct sockaddr* )&server, length_of_server) < 0)
    {
        printf("binding error\n");
        exit(1);
    }
    char buffer_server[BUFFER_SIZE], buffer_client[BUFFER_SIZE];
    memset(&buffer_server, 0, sizeof(buffer_server));
    memset(&buffer_client, 0, sizeof(buffer_client));
    int length_of_client = sizeof(client);
    getsockname(sockfd, (struct sockaddr *)&server, &length_of_server);
    char address[INADDRESS_LEN];
    inet_ntop(AF_INET, &(server.sin_addr.s_addr), address, INADDRESS_LEN);
    printf("Server ip address is %s and port is %d\n", address, ntohs(server.sin_port));
    printf("UDP server created. Socket will be closed in %ld seconds. Waiting for data...", timeout.tv_sec);
    printf("\n");
    setsockopt(sockfd, SOL_SOCKET, SO_RCVTIMEO, (const char*)&timeout.tv_sec, sizeof(timeout));
    size_t length_of_bytes_recieved = recvfrom(sockfd, buffer_server , BUFFER_SIZE, 0, (struct sockaddr*)&client, &length_of_client);
    if (length_of_bytes_recieved == 0)
    {
        printf("Error recieving message\n");
        exit(2);
    }
    printf("Packets recieved from client: %li bytes\n", length_of_bytes_recieved);
    sprintf(buffer_client, "Packets recieved from client: %li bytes\n", length_of_bytes_recieved);
    if (sendto(sockfd, buffer_client, strlen(buffer_client), 0, (struct sockaddr* ) &client, length_of_client) < 0)
    {
        printf("Sending failed\n");
        exit(3);
    }
    close(sockfd);

}