/*
#include <stdio.h>

int main() {

	int c, n, sum=0, count=0;

	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		int* arr = (int *)malloc(sizeof(int) * n);
		sum = 0, count = 0;

		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[j]);
			sum += arr[j];
		}

		for (int j = 0; j < n; j++) {
			if (arr[j] > sum / n) count++;
		}

		printf("%.3lf%%\n", (double)count / n * 100);
	}

	return 0;
}
*/