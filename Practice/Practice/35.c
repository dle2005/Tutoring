/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct student {
	char name[10];
	char favorite[3][10];
} student;

bool ABC(student stu[], char* perA, char* perB) {
	for (int i = 0; i < 3; i++)
		if (!strcmp(stu[i].name, perB))
			for(int j = 0; j < 3; j++)
				if(!strcmp(stu[i].favorite[j], perA))
					return 1;

	return 0;
}

void main() {
	student arr[3];

	for (int i = 0; i < 3; i++) {
		scanf("%s -> ", &arr[i].name);
		for (int j = 0; j < 3; j++)
			scanf("%s", &arr[i].favorite[j]);
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			if (ABC(arr, arr[i].name, arr[i].favorite[j]))
				printf("%s %s\n", arr[i].name, arr[i].favorite[j]);
	}
}
*/