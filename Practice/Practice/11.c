/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));
	int arr[10], input, point;
	for(int i=0; i<10; i++) {
		arr[i] = (rand() %100) +1;
		for(int j=0; j<i; j++) {
			if(arr[i] == arr[j]) {
				i--;
				break;
			}
		}
	}
	printf("찾을 숫자를 입력하시오");
	scanf("%d", &input);
	printf("랜덤숫자 저장 배열 : ");
	for(int i=0; i<10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for(int i=0; i<10; i++) {
		if(arr[i] == input) {
			point = i;
			printf("찾으시는 숫자는 배열의 %d번째에 있습니다.", point);
			return;
		}
	}
	printf("찾으시는 숫자가 배열에 없습니다.");
}
*/