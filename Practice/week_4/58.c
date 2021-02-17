#include <stdio.h>

int main()
{
    char *p[2][2] = {"abc", "defg", "jklmno", "pqrs"};
    char h, e, l, o;
    char *Hi;

    h = *(*(*(p) + 1) + 3) + 1;
    e = *(*(*(p) + 1) + 1);
    l = *(*(*(p + 1)) + 2);
    o = *(*(*(p + 1)) + 5);
    // Hi = (*(*(p + 1) + 4, *(p)) + 1);

    // printf("[%s! ", Hi);
    printf("%c%c%c%c%c!]\n", h, e, l, l, o);
}
