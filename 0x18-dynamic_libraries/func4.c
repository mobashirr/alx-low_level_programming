#include <string.h>

char *_memset(char *s, char b, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return dest;
}

char *_strchr(char *s, char c) {
    while (*s != '\0' && *s != c) {
        s++;
    }
    return (*s == c) ? s : NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s != '\0' && strchr(accept, *s) != NULL) {
        count++;
        s++;
    }
    return count;
}

char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        if (strchr(accept, *s) != NULL) {
            return s;
        }
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0') {
            return haystack;  // Found the substring
        }
        haystack++;
    }
    return NULL;  // Substring not found
}

