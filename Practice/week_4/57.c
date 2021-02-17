#include <stdio.h>

int z;

void f(int x, int y)
{
    z = y; // 0 3 3
    x += y + z; //6 3 3
    z = x * 2; // 6 3 12
}

int main(void)
{
    int y = 3;

    f(z, y);

    printf("%d\n", y + z);
}
