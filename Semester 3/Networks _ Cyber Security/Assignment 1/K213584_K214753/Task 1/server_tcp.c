/* Project done by:
    Muhammad Hussain Javed, 21K-3584
    Vania Abbas, 21K-4753
*/


#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <arpa/inet.h>
#define BUFFER_SIZE 2048 //Max size of buffer
#define SERVERPORT 5000 //Standard server port

/*
    
struct in_addr{
in_addr_t s_addr; /*32 bit IPv4 network byte ordered address
};


struct sockaddr_in {
   uint8_t sin_len; length of structure (16)
   sa_family_t sin_family; AF_INET
   in_port_t sin_port;  16 bit TCP or UDP port number 
   struct in_addr sin_addr;  32 bit IPv4 address
   char sin_zero[8]; /* not used but always set to zero 
};
*/

int main(void)
{
    struct sockaddr_in s_port, client_port; //Create object for sockaddr_in
    char recieve_from_client[BUFFER_SIZE], send_to_client[BUFFER_SIZE];
    memset(&recieve_from_client, 0, sizeof(recieve_from_client)); //set the array to 0
    memset(&send_to_client, 0, sizeof(send_to_client));
    int socketId = socket(AF_INET, SOCK_DGRAM, 0); //Create a socketID using the socket function
    if (socketId < 0) //These function will return 0 if something goes wrong
    {
        printf("Socket creation failed\n");
        exit(2);
    }
    //Setup server addresses and ports
    s_port.sin_family = AF_INET; //Set the address family, in our case it is Ipv4
    s_port.sin_addr.s_addr = htonl(INADDR_ANY);
    s_port.sin_port = htons(SERVERPORT); //Use big endian order, storing MSBytes first
    if(bind(socketId, (struct sockaddr *) &s_port, sizeof(s_port)) < 0)
    {

        printf("Socket binding failed.\n");
        exit(2);
    }
    //Get the port assigned to the server
    int length = sizeof(s_port);
    if (getsockname(socketId, (struct sockaddr* ) &s_port, &length) < 0)
    {
        printf("Cannot get server port\n");
        exit(2);
    }
    printf("Port assigned to server is %d and ip address is %d\n", ntohs(s_port.sin_port), ntohs(s_port.sin_addr.s_addr));

    printf("UDP socket server Creation successfull. Wating for client...\n");
    // Definitions of functions we will use
    /*
        
        ssize_t recvfrom(int sockfd, void* buff, size_t nbytes, int flags, struct sockaddr* from, socklen_t *addrlen);
        ssize_t sendto(int sockfd, const void *buff, size_t nbytes,
                       int flags, const struct sockaddr *to,
                       socklen_t addrlen);
        pid_t fork(void);
        int close(int sockfd);
    */
    size_t length_of_data_recieved = 0;
    //recieve the length of data in bytes
    int client_size = sizeof(client_port);
    length_of_data_recieved = recvfrom(socketId, recieve_from_client, BUFFER_SIZE, 0, (struct sockaddr *) &client_port, &client_size);
    printf("Data recieved from client: \n");
    puts(recieve_from_client); //Puts the data recieved to stdout
    strncpy(send_to_client, recieve_from_client, length_of_data_recieved);
    sendto(socketId, send_to_client, strlen(send_to_client), 0, (struct sockaddr *) &client_port, sizeof(client_port)); //This will send the message to client
        
    if (length_of_data_recieved < 0)
    {
        printf("Error in reading data\n");
        exit(4);
    }

    
    close(socketId);
    return 0;
}