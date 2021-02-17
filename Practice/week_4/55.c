#include <stdio.h>
#include <string.h>

void main() {
    char string[100];
    char pat[10];
    int start_index, j = 0;

    scanf("%s", string);
    scanf("%s", pat);

    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i] == pat[0] && j == 0) start_index = i;
        if(string[i] == pat[j]) j++;
        else j = 0;

        if(j == strlen(pat)) break;
    }

    if(j == strlen(pat)) printf("Array[%d]\n", start_index);
    else printf("-1\n");
}