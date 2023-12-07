#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
#include <paths.h>
#include <stdbool.h>
#include <alloca.h>
#include <sys/stat.h>


#define LINEBUF 1024
#define ARGBUF  64
#define DELIMIT " \t\r\n\a"

extern char **environ;
extern int exit_stat;

/*in serve mode:*/

char    **parse(char *);
int	parse_var(char **args);

int    execfun(char **);
int	envfun(char ** );
int	execbul(char **args)
int    cdfun(char **);
int    exitfun(char **);

char    *_getenv(const char *);
char	*getpath(const char *name, char *env[]);

void	*_realloc(void* array, size_t* size, size_t new_size);

/*not used yet:*/
int     _execvp_(const char *, char * const *);
void	free_command(char **arr);
char 	*_getenv2(char *name, char *env[]);
int 	_setenv(char **args);
char    *readLine();

#define BUILTIN_NUM ((sizeof(builtins)) / (sizeof(builtin)))
#endif