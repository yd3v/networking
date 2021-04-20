#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
extern int errno;
int main() {
	int err = errno;
	char hostname[] = "computer";
	int res = sethostname(hostname, sizeof hostname);
	if(res) {
		printf("err: %s", strerror(err));
		return errno;
	}
	return 0;
}
