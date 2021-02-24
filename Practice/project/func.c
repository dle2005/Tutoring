#include "head.h"

void systemPause() {
    printf("enter ESC to exit\n");

    while (1)
    {
        if (kbhit())
        {
            char c = getch();
            if (c == 27)
                break;
        }
    }
}