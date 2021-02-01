/*
#include <stdio.h>

int main() {
	int arr[10] = { 0 };
	int a, b, c, sum, i;
	char temp[100];

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	sum = a * b * c;
	sprintf(temp, "%d", sum);

	for (i = 0; i < strlen(temp); i++)
		arr[temp[i] - '0']++;

	for (i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
}
*/