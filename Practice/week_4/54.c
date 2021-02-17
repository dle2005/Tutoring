#include <stdio.h>
#include <string.h>

void main() {
    char string1[] = "amobile";
    char string2[] = "uto";
    char temp[100] = "";

    strncpy(temp, string1, 1);
    strcat(temp, string2);
    strcat(temp, (string1 + 1));

    printf("%s\n", temp);
}