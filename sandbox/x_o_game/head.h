#ifndef HEAD_h
#define HEAD_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

extern int draw;
extern int bot;
extern char turn;

void print_start(void);
void print_instructions();
void print_board(char board[3][3]);

void game_started();
char get_input(char board[3][3]);
int check_vaild(char num, char board[3][3]);
int update_board(char input, char board[3][3], char ch);
int check_winning(char game[3][3]);

#endif