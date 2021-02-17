#include <stdio.h>
#include <string.h>

int main(void) {
	char buf[80];
	int count = 0;

	printf("input your word! (to quit, type quit)\n");
	scanf("%s", buf);

	while (strcmp(buf, "quit") != 0)
	{
		count++;
		scanf("%s", buf);
	}
	printf("The # of words = %d\n", count);
	return 0;
}