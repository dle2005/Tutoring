#include "head.h"

void wordBook()
{
    Word word;
    int page_num = 0;

    FILE *fp = fopen("Wordbook.txt", "r");
    fseek(fp, 0, SEEK_SET);

    system("clear");
    for (int i = 0; i < 10; i++)
    {
        if (feof(fp) != 0)
            break;
        fread(&word, sizeof(word), 1, fp);
        printf("%s : %s\n", word.eng_name, word.kor_name);
    }
    printf("page_num : %d\n", page_num);

    while (1)
    {
        if (kbhit())
        {
            int key = getch();
            if (key == 224 || key == 0)
            {
                key = getch();
                if (key == 75)
                {
                    system("clear");
                    fseek(fp, -(sizeof(word) * 20), SEEK_CUR);

                    for (int i = 0; i < 10; i++)
                    {
                        if (feof(fp) != 0)
                            break;
                        fread(&word, sizeof(word), 1, fp);
                        printf("%s : %s\n", word.eng_name, word.kor_name);
                    }
                    printf("page_num : %d\n", --page_num);
                }
                else if (key == 77)
                {
                    system("clear");

                    for (int i = 0; i < 10; i++)
                    {
                        if (feof(fp) != 0)
                            break;
                        fread(&word, sizeof(word), 1, fp);
                        printf("%s : %s\n", word.eng_name, word.kor_name);
                    }
                    printf("page_num : %d\n", ++page_num);
                }
            }
        }
    }
}

void makeDummy()
{
    FILE *fp = fopen("Wordbook.txt", "ab+");

    for (int i = 0; i < 26; i++)
    {
        Word word;

        printf("eng: ");
        scanf("%s", &word.eng_name);
        printf("kor: ");
        scanf("%s", &word.kor_name);

        fwrite(&word, sizeof(word), 1, fp);
    }
}