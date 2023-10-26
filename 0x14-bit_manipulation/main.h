#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
/*i used this helper functions*/
void print_buf(char *buf,int n);
int _putchar(char c);

#endif