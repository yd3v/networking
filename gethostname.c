#include <unistd.h> // gethostname
#include <stdio.h>
#include <malloc.h>
int main() {
	char *hostname = (char*) malloc(30 * sizeof(char*));
	gethostname(hostname, sizeof hostname); // (char* name, size_t len)
	printf("hostname -> %s\n", hostname);
	return 0;
}
