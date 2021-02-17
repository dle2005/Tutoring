#include <stdio.h>

typedef struct {
    int a[3];
    int b;
} xxx;

void f(xxx tmp) {
    tmp.a[0] = 5;
    tmp.a[1] = 10;
}

int main() {
    xxx imsi = {{1, 2}, 3};
    f(imsi);
    printf("%d %d %d %d\n", imsi.a[0], imsi.a[1], imsi.a[2], imsi.b);
}
