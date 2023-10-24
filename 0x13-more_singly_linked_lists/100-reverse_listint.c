#include <stdio.h>

/* Definition for singly-linked list */
struct listint_s {
    int n;
    struct listint_s *next;
};

typedef struct listint_s listint_t;

listint_t *reverse_listint(listint_t **head) {
    listint_t *prev = NULL;
    listint_t *current = *head;
    
    while (current != NULL) {
        listint_t *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    *head = prev; /* Update the head to point to the new first node (prev) */
    
    return *head;
}