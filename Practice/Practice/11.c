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
	printf("ã�� ���ڸ� �Է��Ͻÿ�");
	scanf("%d", &input);
	printf("�������� ���� �迭 : ");
	for(int i=0; i<10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for(int i=0; i<10; i++) {
		if(arr[i] == input) {
			point = i;
			printf("ã���ô� ���ڴ� �迭�� %d��°�� �ֽ��ϴ�.", point);
			return;
		}
	}
	printf("ã���ô� ���ڰ� �迭�� �����ϴ�.");
}
*/