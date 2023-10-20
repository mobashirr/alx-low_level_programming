#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s
{
    char *str;
    struct list_s *next;
} data;

data *putf(char *, data **);
data *putb(char *, data **);
void print(data *);

#endif