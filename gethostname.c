#include <unistd.h> // gethostname
#include <arpa/inet.h> //inet_ntop
#include <netdb.h> //gethostbyname, hostent
#include <stdio.h>
#include <malloc.h>
int main() {
	char *hostname = (char*)malloc(30);
	struct hostent *address;
	char ip_addr[16];

	gethostname(hostname, sizeof hostname); // (char* name, size_t len)
	address = gethostbyname(hostname);
	inet_ntop(AF_INET, address->h_addr, ip_addr, sizeof ip_addr);
	// (int af, const void *src, char *dst, socklen_t size)
	printf("hostname -> %s\naddress  -> %s\n", hostname, ip_addr);
	return 0;
}
