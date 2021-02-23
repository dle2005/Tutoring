#include "head.h"

void login()
{
    UserInfo user;
    UserInfo signed_user;

    while (1)
    {
        bool exist = false; // 아이디 존재 여부

        printf("ID: ");
        scanf("%s", &user.user_id);
        printf("Password: ");
        scanf("%s", &user.user_password);

        FILE *fp = fopen("UserInfo.txt", "rb");

        while (feof(fp) == 0) // 파일 끝까지 읽기
        {
            fread(&signed_user, sizeof(signed_user), 1, fp); // 유저 정보 읽어오기

            if (strcmp(signed_user.user_id, user.user_id) == 0 && strcmp(signed_user.user_password, user.user_password) != 0) // 비밀번호 오류시
            {
                printf("wrong password\n");
                Sleep(1000);
                system("clear");
                exist = true; // 존재하면 true
                break;
            }
            else if(strcmp(signed_user.user_id, user.user_id) == 0 && strcmp(signed_user.user_password, user.user_password) == 0) // 성공시
            {
                strcpy(user_id, user.user_id);
                system("clear");
                return;
            }
        }

        if (!exist)
        {
            printf("wrong id\n");
            Sleep(1000);
            system("clear");
        }

        fclose(fp);
    }
}
