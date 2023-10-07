#include "main.h"

/**
 *_realloc - reallocate  memory
 *@ptr: pointer to allocated memory
 *@old_size: size of memory allocated
 *@new_size: size to be reallocated ptr for.
 *Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    if (old_size == new_size) {
        return ptr;
    }

    if (new_size == 0 && ptr != NULL) {
        free(ptr);
        return NULL;
    }

    if (ptr == NULL && new_size != 0) {
        void *reallo = malloc(new_size);

        if (reallo == NULL) {
            return NULL;
        }

        return reallo;
    }

    void *reallo = malloc(new_size);

    if (reallo == NULL) {
        free(ptr);
        return NULL;
    }

    memcpy(reallo, ptr, (old_size < new_size) ? old_size : new_size);
    free(ptr);

    return reallo;
}

int main() {
    int *arr = malloc(5 * sizeof(int));
    printf("Old address: %p\n", arr);

    int *new_arr = _realloc(arr, 5 * sizeof(int), 10 * sizeof(int));
    printf("New address: %p\n", new_arr);

    free(new_arr);

    return 0;
}
