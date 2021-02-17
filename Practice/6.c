/*
#include <stdio.h>
void main() {
	for(int i=1; i<=9; i+=3) {
		for(int j=1; j<=9; j++) {
			for(int k=0; k<3; k++) {
				printf("%2d X %2d = %2d    ", i+k, j, (i+k)*j);
			}
			printf("\n");
		}
		printf("\n");
	}
}
*/
/*
#include <stdio.h>
void main() {
	int i=1, j=1, k=0;
	while(i<=9) {
		j=1;
		while(j<=9) {
			k=0;
			while(k<3) {
				printf("%2d X %2d = %2d    ", i+k, j, (i+k)*j);
				k++;
			}
			printf("\n");
			j++;
		}
		printf("\n");
		i+=3;
	}
}
*/

/*
#include <stdio.h>
int main() {
	int i=1, j=1, k=0;
	goto I;
I:
	if(i<=9) {
		printf("\n");
		j=0;
		goto J;
	}
	else
		return 0;
J:
	if(j<=9) {
		printf("\n");
		k=0;
		goto K;
	}
	else {
		i+=3;
		goto I;
	}
K:
	if(k<3) {
		printf("%2d X %2d = %2d    ", i+k, j, (i+k)*j);
		k++;
		goto K;
	}
	else {
		j++;
		goto J;
	}
}
*/