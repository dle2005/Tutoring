/*
#include <stdio.h>

void main() {
	int studentScore[10] = { 0 };
	int studentRank[10] = { 1,1,1,1,1,1,1,1,1,1 };

	for (int i = 0; i < 10; i++) {
		printf("%d번 학생: ", i + 1);
		scanf("%d", &studentScore[i]);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == j) continue;

			if (studentScore[i] < studentScore[j])
				studentRank[i]++;
		}
	}

	printf("--결과--\n");
	for (int i = 0; i < 10; i++)
		printf("%d번 학생: %d점 - %d등\n", i + 1, studentScore[i], studentRank[i]);
}
*/