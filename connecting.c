#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <arpa/inet.h>
int main() {
	int s, c, port;
	struct sockaddr_in address;
	struct hostent *host;
	port = 80;

	address.sin_family = AF_INET;
	address.sin_port = htons(port);

//	host = gethostbyname("localhost");
//	memcpy(&address.sin_addr, host->h_addr, sizeof address.sin_addr);

	inet_pton(AF_INET, "127.0.0.1", &address.sin_addr);
	s = socket(AF_INET, SOCK_STREAM, 0);
	c = connect(s, (struct sockaddr*)&address, sizeof address);
	return 0;
}
