/*
#include <stdio.h>
#include <stdbool.h>

int dn(int n) {
	int result = n;

	while (n != 0) {
		result += n % 10;
		n /= 10;
	}

	return result;
}

void main() {
	bool selfNumber[1001] = { false };
	int temp;

	for (int i = 1; i < 1000; i++) {
		temp = dn(i);
		if (temp <= 1000) selfNumber[temp] = true;
	}

	for (int i = 1; i <= 1000; i++) {
		if (!selfNumber[i]) printf("%d\n", i);
	}

}
*/