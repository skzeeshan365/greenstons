#include <stdio.h>
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

int connectSocket(short hsocket)
{
    int serverPort = 12345;
    struct sockaddr_in remote = {0};

    remote.sin_family = AF_INET;
    remote.sin_port = htons(serverPort);
    remote.sin_addr.s_addr = inet_addr("127.0.0.1");

    return connect(hsocket, (struct sockaddr *)&remote, sizeof(remote));
}

int socketSend(short hsocket)
{
    int check = -1;

    datas data;
    data.a = 10;
    data.b = 15; 

    check = send(hsocket, &data, sizeof(data), 0);
    return check;
}

int socketReceive(short hsocket)
{
    int check = -1;

    int checking;

    check = recv(hsocket, &checking, sizeof(int), 0);

    printf("Received from server: %d", checking);
    return check;
}

int main()
{
    int hsocket = 0;

    char data[200] = {0};

    hsocket = createSocket();

    if (hsocket == -1)
    {
       perror("Failed to create");
    }

    printf("Socket is created\n");

    if (connectSocket(hsocket) < 0)
    {
        perror("Failed to connect");
    }
    printf("Connected to server\n");

    socketSend(hsocket);

    socketReceive(hsocket);

    close(hsocket);
}