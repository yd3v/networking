#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
int main(int argc, char* argv[]) {
	if(argc < 2) return 1;
	char buff[20];
	struct hostent *host;
	host = gethostbyname(argv[1]);
	if(!host) return 1;
	inet_ntop(AF_INET, host->h_addr, buff, sizeof buff);
	printf("%s\n", buff);
	return 0;
}
