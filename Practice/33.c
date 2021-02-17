/*
#include <stdio.h>

typedef struct phoneBook {
	char* name;
	int phoneNumber;
} phoneBook;

void main() {
	char name[10];
	phoneBook arr[5] = { {"a", 10}, {"b", 20}, {"c", 30}, {"d", 40}, {"e", 50} };

	printf("name? ");
	scanf("%s", &name);

	for (int i = 0; i < 5; i++)
		if(!strcmp(name, arr[i].name)) printf("%d\n", arr[i].phoneNumber);

}
*/