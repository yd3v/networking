#include <stdio.h>
#include <sys/socket.h>
int main() {
	int s = socket(AF_INET, SOCK_STREAM, 0); // domain, type, protocol

	// on success, socket returns the file descriptor
	// and 0 on error

	if(s) {
		printf("success, fd -> %d\n", s);
	} else {
		printf("err, s -> %d", s);
		return 1;
	}

	return 0;
}
