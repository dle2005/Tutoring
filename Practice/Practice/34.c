/*
#include <stdio.h>
#include <stdlib.h>

typedef struct student {
	int studentId;
	double heihgt;
	double weight;
} student;

double avg_height(student arr[], int n) {
	double sum = 0.;

	for (int i = 0; i < n; i++)
		sum += arr[i].heihgt;

	return sum / n;
}

double avg_weight(student arr[], int n) {
	double sum = 0.;

	for (int i = 0; i < n; i++)
		sum += arr[i].weight;

	return sum / n;
}

void main() {
	int n;
	student *arr;

	scanf("%d", &n);
	arr = (int *)malloc(sizeof(student) * n);

	for (int i = 0; i < n; i++)
		scanf("%d %lf %lf", &arr[i].studentId, &arr[i].heihgt, &arr[i].weight);

	printf("%.1lf %.1lf\n", avg_height(arr, n), avg_weight(arr, n));

	for (int i = 0; i < n; i++) {
		if (arr[i].heihgt >= avg_height(arr, n) && arr[i].weight >= avg_weight(arr, n))
			printf("%d %s\n", arr[i].studentId, "super");
		else if (arr[i].heihgt >= avg_height(arr, n) || arr[i].weight >= avg_weight(arr, n))
			printf("%d %s\n", arr[i].studentId, "average");
		else printf("%d %s\n", arr[i].studentId, "below");
	}
}
*/