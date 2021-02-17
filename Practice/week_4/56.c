#include <stdio.h>

void tell_me(int f(int));
int f(int);
int a(int);

void main()
{
    tell_me(a);
}

void tell_me(int (*f)(int))
{
    int x;

    if (f == (*a))
        x = 1;
    else
        x = 2;

    printf("%d\n", f(x));
}

int f(int j) { return j * j; }

int a(int j) { return j * 4; }