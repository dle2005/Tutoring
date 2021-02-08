/*
#include <stdio.h>

int strlen(char *s) {
	int length = 0;

	for (; *s != '\0'; length++, s++);

	return length;
}

void main() {
	char a[] = "abc\0";
	char b[] = { 'a','b','c' };

	printf("%d\n", strlen(a));
	printf("%d\n", strlen(b));
}
*/