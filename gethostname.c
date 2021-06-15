#include <unistd.h> // gethostname
#include <arpa/inet.h> //inet_ntop
#include <netdb.h> //gethostbyname, hostent
#include <stdio.h>
int main() {
	char hostname[30];
	struct hostent *address;
	char ip_addr[16];

	gethostname(hostname, sizeof hostname);
	address = gethostbyname(hostname);
	inet_ntop(AF_INET, address->h_addr, ip_addr, sizeof ip_addr);
	printf("hostname -> %s\naddress  -> %s\n", hostname, ip_addr);
	return 0;
}
