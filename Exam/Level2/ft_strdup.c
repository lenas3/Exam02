#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *dupe;

    while(src[len])
        len++;

    dupe = malloc((len + 1) * sizeof(char));
    if(!dupe)
        return NULL;

    while(src[i])
    {
        dupe[i] = src[i];
        i++;
    }
    dupe[i] = '\0';
    return dupe;
}
