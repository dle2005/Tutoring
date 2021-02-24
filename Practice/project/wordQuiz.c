#include "head.h"

void wordQuiz()
{
    char user_txt[30];
    strcpy(user_txt, user_id);
    strcmp(user_txt, ".txt");

    FILE *fp1 = fopen("Wordbook.txt", "rb");
    FILE *fp2 = fopen(user_txt, "ab+");

    Word word;
    Word wrong_words[10];
    int progress = 0;
    int wrong_index = 0;

    for (int i = 0; i < 10; i++)
    {
        system("clear");

        char input[20];

        fread(&word, sizeof(word), 1, fp1);

        printf("%d/10\n", progress++);

        printf("%s : ", word.eng_name);
        scanf("%s", input);

        if (strcmp(word.kor_name, input) != 0)
        {
            fwrite(&word, sizeof(word), 1, fp2);

            strcpy(wrong_words[wrong_index].eng_name, word.eng_name);
            strcpy(wrong_words[wrong_index++].kor_name, word.kor_name);
        }
    }
    system("clear");

    printf("wrong answers\n");

    for (int i = 0; i < wrong_index; i++)
    {
        printf("%s : %s\n", wrong_words[i].eng_name, wrong_words[i].kor_name);
    }

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