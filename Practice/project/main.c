#include "head.h"

int main()
{
    system("clear");

    char beginScreen_input;

    while (1)
    {
        beginScreen(); // 로그인 or 회원가입 선택 화면

        beginScreen_input = getche();

        if (beginScreen_input == '1') {
            system("clear");
            login();
            break;
        }
        else if(beginScreen_input == '2') {
            system("clear");
            signUp();
        }
        else if(beginScreen_input == '3') {
            system("clear");
            return 0;
        }
        else {
            system("clear");
            printf("wrong input, enter\n");
        }
    }

}