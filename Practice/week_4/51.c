#include <stdio.h>
#include <string.h>

int main() {
	char protoco[] = "http://";
	char host[] = "www.ssu.ac.kr";
	char path[] = "oslab.html";
	char url[100];

	strcat(url, protoco);
	strcat(url, host);
	strcat(url, path);

	printf("URL = %s\n", url);
	return 0;
}
