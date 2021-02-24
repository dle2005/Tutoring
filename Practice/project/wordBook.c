#include "head.h"

void wordBook()
{
    Word word;
    int page_num = 1;

    FILE *fp = fopen("Wordbook.txt", "r");

    printWordBook(fp, word); // 10문제 출력 함수
    printf("page_num : %d/10\n", page_num);
    printf("enter ESC to exit\n");

    while (1)
    {
        if (kbhit())
        {
            int key = getch();
            if (key == 224 || key == 0) // <- or ->인 경우
            {
                key = getch();
                if (key == 75 && page_num > 1) 
                {
                    fseek(fp, -(sizeof(word) * 20), SEEK_CUR); // 파일 포인터 이동

                    printWordBook(fp, word);
                    printf("page_num : %d/10\n", --page_num);
                    printf("enter ESC to exit\n");
                }
                else if (key == 77 && page_num < 10)
                {
                    printWordBook(fp, word);
                    printf("page_num : %d/10\n", ++page_num);
                    printf("enter ESC to exit\n");
                }
            }

            if (key == 27) // ESC 입력 받으면 종료
                break;
        }
    }
}

void printWordBook(FILE *fp, Word word)
{
    system("clear");

    for (int i = 0; i < 10; i++)
    {
        if (feof(fp) != 0) // 파일의 끝인 경우 종료 
            break;
        fread(&word, sizeof(word), 1, fp); // 하나씩 읽어 오기
        printf("%s : %s\n", word.eng_name, word.kor_name); // 출력
    }
}

void makeDummy()
{
    FILE *fp = fopen("Wordbook.txt", "ab+");

    for (int i = 1; i <= 100; i++)
    {
        Word word;

        sprintf(word.eng_name, "%d", i);
        sprintf(word.kor_name, "%d", i);

        fwrite(&word, sizeof(word), 1, fp);
    }
}