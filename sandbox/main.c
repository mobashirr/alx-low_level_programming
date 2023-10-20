#include "main.h"

int main ()
{
    char *str;
    int ch;
    data *head;
    head = NULL;
    while (1)
    {
        printf("write the string you want to add :\n");
        scanf("%s", str);
        printf("1 to put it in the first and 2 for the last:\n");
        scanf("%d", &ch);
        if (ch == 1)
        putf(str, &head);
        else if (ch == 2)
        putb(str, &head);
        else
        break;
    }

    print(head);
    return(0);
}