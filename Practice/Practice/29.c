/*
#include <stdio.h>

void bubleSort(int *arr, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - 1; j++)
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

int main() {
	int arr[10] = { 4, 3, 6, 7, 1, 2, 9, 8, 5 };

	bubleSort(arr, 10);


	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}
*/