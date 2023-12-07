#include "main.h"
/**
 *  _execvp_ -
 * @name:
 * @argv:
 * return:
*/
int _execvp_(const char *name, char * const *argv)
{
        const char **memp;
        int cnt;
        size_t lp, ln;
        int eaccess = 0;
        unsigned int etxtbsy = 0;
        char buf[255];
        const char *bp, *path, *p;

        if (name == NULL || name[0] == '\0')
        {
                errno = ENOENT;
                goto done;
        }

        if (strchr(name, '/'))
        {
                bp = name;
                path = "";
                goto retry;
        }
        bp = buf;
        if (!(path = _getenv("PATH")))
                path = _PATH_DEFPATH;
        
        ln = strlen(name);
        do
        {
                for (p = path; *path != 0 && *path != ':'; path++)
                        continue;
                if (p == path)
                {
                        p = ".";
                        lp = 1;
                }
                else
                        lp = path - p;
                
                if (lp + ln + 2 > sizeof(buf))
                {
                        (void)write(STDERR_FILENO, "execvp: ", 8);
                        (void)write(STDERR_FILENO, p, lp);
                        (void)write(STDERR_FILENO, ": path too long\n", 16);
                        continue;
                }

                memcpy(buf, p, lp);
                buf[lp] = '/';
                memcpy(buf + lp + 1, name, ln);
                buf[lp + ln + 1] = '\0';

retry:          (void)execve(bp, argv, environ);
                switch (errno)
                {
                        case EACCES:
                                eaccess = 1;
                                break;
                        case ENOTDIR:
                        case ENOENT:
                                break;
                        case ENOEXEC:
                        {
                                for (cnt = 0; argv[cnt] != NULL; ++cnt)
                                        continue;
                                if ((memp = alloca((cnt + 2) * sizeof(memp))) == NULL)
                                        goto done;
                                memp[0] = _PATH_BSHELL;
                                memp[1] = bp;
                                (void)memcpy(&memp[2], &argv[1], cnt * sizeof(memp));
                                (void)execve(_PATH_BSHELL, (char * const *) memp, environ);
                                goto done;
                        }
                        case ETXTBSY:
                                if (etxtbsy < 3)
                                        (void)sleep(++etxtbsy);
                                goto retry;
                        default:
                                goto done;
                }
        } while (*path++ == ':');

        if (eaccess)
                errno = EACCES;
        else if (!errno)
                errno = ENOENT;
done:
        return (-1);
        

}