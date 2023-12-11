#include <stdio.h>

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

void _puts(char *s) {
    while (*s != '\0') {
        putchar(*s);
        s++;
    }
    putchar('\n');
}

char *_strcpy(char *dest, char *src) {
    char *originalDest = dest;
    while ((*dest++ = *src++) != '\0');
    return originalDest;
}

int _atoi(char *s) {
    int result = 0;
    while (*s != '\0') {
        result = result * 10 + (*s - '0');
        s++;
    }
    return result;
}

