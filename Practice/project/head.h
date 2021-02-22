#include <stdio.h>
#include <Stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>

// screen.c
void beginScreen();

// login.c
void login();

// signUp.c
void signUp();

char user_id[20];

typedef struct UserInfo {
    char user_id[20];
    char user_password[20];
} UserInfo;