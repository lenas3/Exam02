#include <stdlib.h>

int numlen(int nbr)
{
    int len = 0;
    
    if(nbr == 0)
        len = 1;
    if(nbr < 0)
    {
        len++;
        nbr *= -1;
    }
    while(nbr != 0)
    {
        nbr /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int nbr)
{
    char *result;

    if (nbr == -2147483648)
		return ("-2147483648");

    int len = numlen(nbr);
    result = malloc((len + 1) * sizeof(char));
    if(result == NULL)
        return NULL;
    
    result[len] = '\0';
    len--;
    
    if(nbr == 0)
    {
        result[0] = '0';
        return result;
    }
    if(nbr < 0)
    {
        result[0] = '-';
        nbr *= -1;
    }
    while(nbr)
    {
        result[len--] = nbr % 10 + '0';
        nbr /= 10;
    }
    if(nbr > 0)
        result[0] = nbr % 10 + '0';
    return result;
}
