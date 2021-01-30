/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
	srand(time(NULL));
	int arr[10], point = 0;
	for (int i = 0; i < 10; i++) {
		arr[i] = (rand() % 100) + 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				i--;
				break;
			}
		}
	}
	printf("배열: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	int max = arr[0];
	for (int i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			point = i;
		}
	}
	printf("최대값은 : %d\n", max);
	printf("최대값의 위치는 : %d", point);
}
*/