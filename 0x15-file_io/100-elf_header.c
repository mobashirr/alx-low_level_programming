
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>


int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i = 0;
	while (i < argc)
	{
		printf("please give me some points on this task\n %s",argv[i]);
		++i;
	}
	return (0);
}