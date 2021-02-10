/*
#include <stdio.h>

typedef struct student {
	int korean;
	int english;
	int math;
} student;

double avg(student a) {
	return ((double)a.korean + a.english + a.math) / 3;
}

void main() {
	student arr[2];

	for (int i = 0; i < 2; i++)
		scanf("%d %d %d", &arr[i].korean, &arr[i].english, &arr[i].math);

	for (int i = 0; i < 2; i++)
		printf("%.1lf\n", avg(arr[i]));
}
*/