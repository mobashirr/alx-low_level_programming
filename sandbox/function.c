#include "main.h"

data *putf(char *str, data **head)
{

data *mem;
 mem = malloc(sizeof(data));
 if (mem == NULL)
    {
        free(mem);
        printf("eror with memory");
        exit (98);
    } 
    mem->str = strdup(str);
    mem->next = *head;
    *head = mem;
    return(mem);
}

data *putb(char *str, data **head)
{
    data *node, *temp;

    node = malloc(sizeof(data));
    if(!node)
    {
        free(node);
        exit (98);
    }

    node->str= strdup(str);
    node->next = NULL;

    if (*head == NULL)
    {
        *head = node;
    }
    else
    {
    temp = *head;
    while(temp->next != NULL)
    temp = temp->next;

    temp->next = node;
    }
    
}

void print(data *head)
{

while (head)
{
    printf("%s\n", head->str);
    head = head->next;
}

}