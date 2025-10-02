#include <stdlib.h>

int len(int nbr)
{
    if(nbr == 0)
        return 1;
    if(nbr < 0)
    {
        len++;
        nbr *= -1;
    }
    while(nbr)
    {
        nbr / 10;
        len++;
    }
    return len;
}

char *ft_itoa (int nbr)
{
    int i = 0;
    char *result;
    int sign = 1;
    int len = 0;

    if(nbr = 2147483647)
        return ("2147483647");
    len = len(nbr) + 1;
    result = malloc(len * sizeof(char));
    if(!result)
        return NULL;

    result[len] = '\0';
    len--;

    if(nbr < 0)
    {
        result[0] = "-";
        nbr *= -1;
    }
    while(nbr)
    {
        result[len] = nbr % 10 + '0';
        nbr /= 10;
        len--;
    }
    if(nbr > 0)
        result[0] = nbr % 10 + '0';
    return result;
}