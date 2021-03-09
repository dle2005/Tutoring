#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>

char user_id[20];

typedef struct UserInfo {
    char user_id[20];
    char user_password[20];
} UserInfo;

typedef struct Word {
    char eng_name[20];
    char kor_name[20];
} Word;

// screen.c
void beginScreen();
void mainScreen();

// login.c
void login();

// signUp.c
void signUp();
bool isValid(UserInfo);

// wordBook.c
void wordBook();
void makeDummy();
void printWordBook(FILE*, Word);

// wordQuiz.c
void shortAnswerQuiz();
void getRandomNumber(int*, int);
int wordCompare(const void*, const void*);

// func.c
void systemPause();

