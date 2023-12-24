#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);

/**
 * print - print content of array
 * @arr: array of int
 * Return: void
 */
void print(int *arr, int len)
{
    int i;

    for (i = 0; i < len; i++)
    {
        if (i + 1 != len)
            printf("%d*", arr[i]);
        else
            printf("%d\n", arr[i]);
    }
}

int main(int argc, char *argv[])
{
    int *arr = NULL;
    FILE *file;
    size_t len = 0;
    int i = 0, f = 3;
	long unsigned int num = 1;
    char *line = NULL;

    if (argc != 2)
        return 1;

    file = fopen(argv[1], "r");
    if (!file)
        return 2;

    while (getline(&line, &len, file) != -1)
    {
        num = atoi(line);
		printf("%lu", num);
		printf("=");

        arr = (int *)malloc(sizeof(int) * 2);
        arr[0] = -320;

        while (num % 2 == 0)
        {
            arr[i] = 2;
            num /= 2;
            ++i;
            if (i + 1 >= sizeof(arr) / sizeof(arr[0]))
                arr = realloc(arr, (i * 2) * sizeof(int));
        }

        while (num > 1)
        {
            if (num % f == 0)
            {
                arr[i] = f;
                num /= f;
                ++i;
            }
            else
                f += 2;

            if (i + 1 >= sizeof(arr) / sizeof(arr[0]))
                arr = realloc(arr, (i * 2) * sizeof(int));
        }
        print(arr, i);
        i = 0;
        free(arr);
    }
    free(line);
    fclose(file);
    return 0;
}
