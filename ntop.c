
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
int main(int argc, char* argv[]) {
	if(argc < 2) return 1;

	char buff[16];
	struct hostent *host;

	host = gethostbyname(argv[1]);
	// converts the given hostname to binary form

	if(!host) return 1;

	inet_ntop(AF_INET, host->h_addr, buff, sizeof buff);
	// converts address from binary form to text and takes it into the buffer

	printf("%s\n", buff);
	return 0;
}
