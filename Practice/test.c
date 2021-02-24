#include <stdio.h>
void mumble(int **p, int *q)
{
    **p = 10;
    *p = q;
    printf("mumble: **p = %d, *q = %d\n", **p, *q);
}
int main()
{
    int k = 3;
    int n = 7;
    int *p = &k;
    mumble(&p, &n);
    printf("main: k = %d, n = %d, *p = %d\n", k,
           n, *p);
    return 0;
}