#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>

int main(){
    char server_message[300] = "You have reached to the server!";

    // create server socket
    int server_socket = socket(AF_INET, SOCK_STREAM, 0);

    // specify addr for the socket
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(1999);
    server_address.sin_addr.s_addr = INADDR_ANY;

    // bind the socket to our specify ip and port
    bind(server_socket, (struct sockaddr *) &server_address, sizeof(server_address));

    listen(server_socket, 5);
    int client_socket = accept(server_socket, NULL, NULL);
    send(client_socket, server_message, sizeof(server_message), 0);
    close(server_address);
    return 0;
}