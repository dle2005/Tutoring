#include "head.h"

int main()
{
    system("clear");

    while (1)
    {
        beginScreen(); // 로그인 or 회원가입 선택 화면

        char input = getche();
        system("clear");

        if (input == '1')
        {
            login();
            break;
        }
        else if (input == '2')
        {
            signUp();
        }
        else if (input == '3')
        {
            return 0;
        }
        else
        {
            printf("wrong input, enter\n");
            Sleep(1000);
            system("clear");
        }
    }

    while (1)
    {
        mainScreen();

        char input = getche();
        system("clear");

        if (input == '1')
        {
            wordBook();
            break;
        }
        else if (input == '2')
        {
            signUp();
        }
        else if (input == '3')
        {
            return 0;
        }
        else
        {
            printf("wrong input, enter\n");
            Sleep(1000);
            system("clear");
        }
    }
}