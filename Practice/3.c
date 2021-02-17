/*
#include <stdio.h>
void main() {
	int N;
	while (1) {
		printf("1~9사이의 정수를 입력하시오 : ");
		scanf("%d", &N);
		if (N < 1 || N>9) {
			printf("잘못입력하셨습니다. 1~9사이의 수를 입력하시오\n");
			continue;
		}
		else
			break;
	}
	printf("%d단 구구단을 출력합니다.\n", N);
	for (int i = 1; i < 10; i++)
		printf("%d * %d = %d\n", N, i, N*i);
}
*/