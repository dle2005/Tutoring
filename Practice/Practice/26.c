/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL));

	int n;

	printf("ют╥б: ");
	scanf("%d", &n);

	int **arr = (int **)malloc(sizeof(int *) * n);
	for (int i = 0; i < n; i++)
		arr[i] = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = (rand() % 100) + 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}
*/