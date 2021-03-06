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
            Beep(260, 100);
            fwrite(&word, sizeof(word), 1, fp2);

            strcpy(wrong_words[wrong_index].eng_name, word.eng_name);
            strcpy(wrong_words[wrong_index++].kor_name, word.kor_name);
        }
        else {
            Beep(260, 100);
            Beep(290, 100);
            Beep(330, 100);
        }
    }
    system("clear");

    printf("wrong answers\n");

    printWorngWord(wrong_words, wrong_index);

    systemPause();
}

void multipleChoiceQuize()
{
    srand(time(NULL));
    int random[40] = {0, };
    getRandomNumber(random, 40);
    for(int i = 0; i< 40; i++)
    printf("%d\n", random[i]);

    char user_txt[30];
    strcpy(user_txt, user_id);
    strcat(user_txt, ".txt");
    printf("%s\n", user_txt);

    FILE *fp1 = fopen("Wordbook.txt", "rb");
    FILE *fp2 = fopen(user_txt, "ab+");

    Word word[4] = {0, };
    Word wrong_words[10] = {0, };
    int progress = 1;
    int wrong_index = 0;

    for (int i = 0; i < 10; i++)
    {
        system("clear");

        for(int j = 0; j < 4; j++) {
            printf("random: %d\n", random[(i + j)]);
            fseek(fp1, sizeof(word) * random[(i + j)], SEEK_SET);
            fread(&word[j], sizeof(word), 1, fp1);
        }

        int answer = rand() % 4;
        printf("answer: %d\n", answer);

        printf("%d/10\n", progress++);
        printf("%s\n", word[answer].eng_name);
        for(int j = 0; j < 4; j++) {
            printf("%d : %s\n", j + 1, word[j].kor_name);
        }

        char input = getch();
        if(input == 27) return;

        if (strcmp(word[answer].kor_name, word[input-47].kor_name) != 0)
        {
            Beep(260, 100);
            fwrite(&word, sizeof(word), 1, fp2);

            strcpy(wrong_words[wrong_index].eng_name, word[answer].eng_name);
            strcpy(wrong_words[wrong_index++].kor_name, word[answer].kor_name);
        }
        else {
            Beep(260, 100);
            Beep(290, 100);
            Beep(330, 100);
        }
    }
    system("clear");

    printf("wrong answers\n");

    printWorngWord(wrong_words, wrong_index);

    systemPause();
}

void printWorngWord(Word *wrong_words, int wrong_index) {
    qsort(wrong_words, sizeof(wrong_words) / sizeof(Word), sizeof(Word), wordCompare);
    for (int i = 0; i < wrong_index; i++)
    {
        printf("%s : %s\n", wrong_words[i].eng_name, wrong_words[i].kor_name);
    }
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