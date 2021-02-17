#include <stdio.h>
#include <string.h>

int main() {

	FILE *fp;
	char arr[] = "hellow_world";

	fp = fopen("a.txt", "w+");

	fwrite(arr, sizeof(char), strlen(arr)+1, fp);
	
	fclose(fp);

	return 0;
}
