/*
#include <stdio.h>

void main() {
	int studentScore[10] = { 0 };
	int studentRank[10] = { 1,1,1,1,1,1,1,1,1,1 };

	for (int i = 0; i < 10; i++) {
		printf("%d�� �л�: ", i + 1);
		scanf("%d", &studentScore[i]);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == j) continue;

			if (studentScore[i] < studentScore[j])
				studentRank[i]++;
		}
	}

	printf("--���--\n");
	for (int i = 0; i < 10; i++)
		printf("%d�� �л�: %d�� - %d��\n", i + 1, studentScore[i], studentRank[i]);
}
*/