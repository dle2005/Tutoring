/*
#include <stdio.h>

typedef struct square {
	int x;
	int y;
}square;

int area(square *a) {
	return a->x * a->y;
}

void main() {
	square a[3] = { {10, 20}, {20, 30}, {30, 40} };

	for (int i = 0; i < 3; i++) {
		printf("%d\n", area(&a[i]));
	}
}
*/