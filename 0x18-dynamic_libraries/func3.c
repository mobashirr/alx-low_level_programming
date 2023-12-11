char *_strcat(char *dest, char *src) {
    char *originalDest = dest;
    while (*dest != '\0') {
        dest++;
    }
    while ((*dest++ = *src++) != '\0');
    return originalDest;
}

char *_strncat(char *dest, char *src, int n) {
    char *originalDest = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (n-- > 0 && (*dest++ = *src++) != '\0');
    *dest = '\0';  // Ensure the destination string is null-terminated
    return originalDest;
}

char *_strncpy(char *dest, char *src, int n) {
    char *originalDest = dest;
    while (n-- > 0 && (*dest++ = *src++) != '\0');
    while (n-- > 0) {
        *dest++ = '\0';  // Pad remaining characters with null
    }
    return originalDest;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

