#include "head.h"

void wordQuiz() {
    char user_txt[30];
    strcpy(user_txt, user_id);
    strcmp(user_txt, ".txt");

    FILE *fp1 = fopen("Wordbook.txt", "rb");
    FILE *fp2 = fopen(user_txt, "ab+");

    Word word;
    int progress = 0;

    for(int i = 0; i < 10; i++) {
        system("clear");

        char input[20];

        fread(&word, sizeof(word), 1, fp1);

        printf("%d/10\n", progress++);

        printf("%s : ", word.eng_name);
        scanf("%s", input);

        if(strcmp(word.kor_name, input) != 0) {
            fwrite(&word, sizeof(word), 1, fp2);
        }
    }

}