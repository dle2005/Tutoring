/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL));

	int x, y;

	printf("ют╥б: ");
	scanf("%d %d", &x, &y);

	int **arr = (int **)malloc(sizeof(int *) * x);
	for (int i = 0; i < y; i++)
		arr[i] = (int *)malloc(sizeof(int) * y);

	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			arr[i][j] = rand() % 100 + 1;

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

}
*/