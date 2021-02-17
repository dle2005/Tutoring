/*
#include <stdio.h>

int main() {
	int a, b, c = 0, i, count = 1;

	scanf("%d", &a);

	if (a < 10) c = a * 10 + a;
	else c = (a % 10) * 10 + (((a / 10) + (a % 10)) % 10);

	while (a != c) {
		c = (c % 10) * 10 + (((c / 10) + (c % 10)) % 10);
		count++;
	}

	printf("%d", count);
}
*/