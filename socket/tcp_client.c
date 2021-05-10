#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>

int main(){
    // create network socket
    int network_socket = socket(AF_INET, SOCK_STREAM, 0);

    // specify an addr for the socket
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = INADDR_ANY;
    server_address.sin_port = htons(1999);

    int c_status = connect(network_socket,
                           (struct sockaddr *)
                           &server_address,
                           sizeof(server_address)
                           );

    if (c_status == -1){
        printf("The connection attempt failed!");
        return c_status;
    }

    char response[300];
    recv(network_socket, &response, sizeof(response), 0);
    printf("%s\n", response);
    close(network_socket);
    return 0;
}