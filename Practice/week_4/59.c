#include <stdio.h>

void ff(char a[4][2][3]) {
    printf("sizeof(a) : %d\n", sizeof(a));
}

int main() {
    char a[3][2][3];
    ff(a);
    return 0;
}
