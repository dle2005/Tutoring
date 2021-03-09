#include "head.h"

void shortAnswerQuiz()
{
    srand(time(NULL));
    int random[10];
    getRandomNumber(random, 10);

    char user_txt[30];
    strcpy(user_txt, user_id);
    strcat(user_txt, ".txt");
    printf("%s\n", user_txt);

    FILE *fp1 = fopen("Wordbook.txt", "rb");
    FILE *fp2 = fopen(user_txt, "ab+");

    Word word;
    Word wrong_words[10] = {0, };
    int progress = 1;
    int wrong_index = 0;

    for (int i = 0; i < 10; i++)
    {
        system("clear");

        char input[20];

        fseek(fp1, sizeof(word) * random[i], SEEK_SET);
        fread(&word, sizeof(word), 1, fp1);

        printf("%d/10\n", progress++);

        
        printf("%s : ", word.eng_name);

        char ch = getche();
        if(ch == 27) return;
        else input[0] = ch;
        scanf("%s", input+1);

        if (strcmp(word.kor_name, input) != 0)
        {
            Beep(260, 300);
            fwrite(&word, sizeof(word), 1, fp2);

            strcpy(wrong_words[wrong_index].eng_name, word.eng_name);
            strcpy(wrong_words[wrong_index++].kor_name, word.kor_name);
        }
        else {
            Beep(260, 300);
            Beep(290, 399);
            Beep(330, 300);
        }
    }
    system("clear");

    printf("wrong answers\n");

    qsort(wrong_words, sizeof(wrong_words) / sizeof(Word), sizeof(Word), wordCompare);
    for (int i = 0; i < wrong_index; i++)
    {
        printf("%s : %s\n", wrong_words[i].eng_name, wrong_words[i].kor_name);
    }

    systemPause();
}

void getRandomNumber(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                i--;
                break;
            }
        }
    }
}

int wordCompare(const void *A, const void *B)
{
    Word *ptrA = (Word *)A;
    Word *ptrB = (Word *)B;

    return strcmp(ptrA->eng_name, ptrB->eng_name);
}