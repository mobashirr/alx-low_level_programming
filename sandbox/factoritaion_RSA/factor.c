#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);

unsigned long long int factor(unsigned int num, unsigned long long int f) {
    double square = 0;
    square = sqrt(num);
    
    if (num % f == 0) {
        return f;
    } else {
        f += 1;
        while (f <= square)
		{
            if (num % f == 0)
			{
                return f;
            } 
			else 
			{
                f += 2;
            }
        }
    }
    return 1;
}

int main(int argc, char *argv[]) 
{
    FILE *file;
    size_t len = 0;
    unsigned long long int num = 1, result = 1;
    char *line = NULL;

    if (argc != 2)
        return 1;

    file = fopen(argv[1], "r");
    if (!file)
        return 2;

    while (getline(&line, &len, file) != -1)
	{
        num = strtoull(line, NULL, 10);
        printf("%llu", num);
        printf("=");
        result = factor(num, 2);
        printf("%llu*%llu\n", result, num / result);
    }

    free(line); 
    fclose(file);
    return 0;
}
