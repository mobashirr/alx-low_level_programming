#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>



int control(char *command_token[], char *env[]);
int execute(char *command[], char *env[]);

char **token(char *);
void free_command(char **);
void* _realloc(void* array, size_t* size, size_t new_size);

int excute_builtin(char *command[]);
int which_builtin(char *command[]);

char *_getenv(char *name, char *env[]);
char *getpath(const char *name, char *env[]);

#endif