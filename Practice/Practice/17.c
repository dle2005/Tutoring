/*
#include <stdio.h>

int main() {
	char arr[80];
	int n = 0, sum = 0, score = 1;

	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		sum = 0, score = 1;

		scanf("%s", arr);

		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				sum += score;
				score++;
			}
			if (arr[j] == 'X') {
				score = 1;
			}
		}

		printf("%d\n", sum);
	}
	return 0;
}
*/