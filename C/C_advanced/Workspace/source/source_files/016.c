#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

typedef struct check
{
    int a;
    int b;
} datas;

short createSocket()
{
    short hsocket = -1;
    printf("Create socket\n");
    hsocket = socket(AF_INET, SOCK_STREAM, 0);
    return hsocket;
}

int bindSocket(short hsocket)
{
    int clientPort = 12345;

    struct sockaddr_in remote = {0};

    remote.sin_family = AF_INET;
    remote.sin_port = htons(clientPort);
    remote.sin_addr.s_addr = htonl(INADDR_ANY);

    return bind(hsocket, (struct sockaddr *)&remote, sizeof(remote));
}

int main()
{
    int socket_desc = 0, connection = 0, clientLen = 0;
    struct sockaddr_in client;

    char client_message[20] = {0};
    char message[100] = {0};

    socket_desc = createSocket();
    if (socket_desc == -1)
    {
        perror("Failed to create socket");
        return 1;
    }

    printf("Socket created\n");

    if (bindSocket(socket_desc) < 0)
    {
        perror("Failed to bind socket");
        return 1;
    }
    printf("Socket binding complete\n");

    listen(socket_desc, 2);

    while (1)
    {
        printf("\nWaiting for incoming connections...\n");
        clientLen = sizeof(client);

        connection = accept(socket_desc, (struct sockaddr *)&client, (socklen_t *)&clientLen);

        if (connection < 0)
        {
            perror("accept failed");
            return 1;
        }

        printf("Connection accepted\n");

        datas data = {0};

        if (recv(connection, &data, sizeof(data), 0) < 0)
        {
            perror("Receive failed");
        }

        printf("Received from client\n");
        
        printf("a : %d\nb : %d\n", data.a, data.b);

        int result = data.a + data.b;

        if (send(connection, &result, sizeof(int), 0) < 0)
        {
            perror("Send failed");
        }

        printf("Server sent\n");

        close(connection);
    }
    close(socket_desc);
    return 0;
}