#include <stdio.h>

void strcpy(char *arr1, char *arr2) {
	for (; (*arr2 = *arr1) != '\0'; arr1++, arr2++);
}

void main() {
	char arr1[] = "hellow";
	char arr2[10];

	strcpy(arr1, arr2);

	printf("%s\n", arr2);
}