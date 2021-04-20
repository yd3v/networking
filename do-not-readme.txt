# some network functions

----- netdb.h -----------
-> struct hostent *gethostbyname(const char *name);
returns a `hostent` struct for the given `name`	
ex:
struct hostent *host = gethostbyname("localhost");

----- unistd.h ---------
-> int gethostname(char *name, size_t len);
puts current hostname to pointer `name`
ex:
char hostname[24];
int res = gethostname(hostname, sizeof hostname);
on success, returns 0, on error returns -1 and set `errno`

-> int sethostname(char *name, size_t len);
set the new hostname 
ex:
char hostname[] = "computer"
sethostname(hostname, sizeof hostname);
on success, returns 0, on error retuns -1 and set `errno`
