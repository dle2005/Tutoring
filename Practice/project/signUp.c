#include "head.h"

void signUp()
{
    UserInfo user; // 입력

    while (1)
    {
        printf("ID: ");
        scanf("%s", &user.user_id);
        printf("Password: ");
        scanf("%s", &user.user_password);

        if (!isValid(user)) // 존재하지 않을시 추가 후 종료
        {
            FILE *fp = fopen("UserInfo.txt", "ab+"); // 파일 이어쓰기 모드로 열기

            fwrite(&user, sizeof(user), 1, fp); // 입력받은 유저정보 추가

            fclose(fp);
            system("clear");
            return;
        }
    }
}

bool isValid(UserInfo user)
{
    UserInfo signed_user; // 이미 회원가입한 유저

    FILE *fp = fopen("UserInfo.txt", "r"); // 파일 읽기 모드로 열기

    while (feof(fp) == 0) // 파일 끝까지 읽기
    {
        fread(&signed_user, sizeof(signed_user), 1, fp); // 유저 정보 읽어오기

        if (strcmp(signed_user.user_id, user.user_id) == 0) // 아이디 존재 여부 판별
        {
            printf("already exist user id\n");
            
            Sleep(1000);
            system("clear");
            fclose(fp);
            return true;
        }
    }
    fclose(fp);

    return false;
}