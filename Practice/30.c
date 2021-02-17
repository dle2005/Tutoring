/*
#include <stdio.h>
#include <stdbool.h>

bool strcmp(char *arr1, char *arr2) {
	for (; *arr1 == *arr2; arr1++, arr2++)
		if (*arr1 == '\0' && *arr2 == '\0')
			return true;
	return false;
}

void main() {
	char arr1[] = "hello";
	char *arr[] = { "hello", "world" };

	if (strcmp(arr1, arr[0])) printf("arr1 == arr[0]\n");
	else printf("arr1 != arr[0]\n");

	if (strcmp(arr1, arr[1])) printf("arr1 == arr[1]\n");
	else printf("arr1 != arr[1]\n");
}
*/