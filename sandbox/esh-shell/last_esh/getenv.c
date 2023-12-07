#include "main.h"

char *_getenv(const char *name)
{
        size_t len = strlen(name);
        char **ep;
        if (!__environ || name[0] == '\0')
                return (NULL);
        for (ep = __environ; *ep != NULL; ++ep)
        {
                if (name[0] == (*ep)[0] && strncmp(name, *ep, len) == 0 && (*ep)[len] == '-')
                        return (*ep + len + 1);
        }
        return (NULL);
}