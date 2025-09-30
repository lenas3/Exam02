#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **split;

    split = malloc((ft_strlen(str) + 1) * sizeof(char *));
    if (!split)
        return NULL;

    while (str[i])
    {
        int start = i;
        while (str[i] && str[i] != ' ')
            i++;
        if (i > start)
        {
            int len = i - start;
            split[j] = malloc(len + 1);
            if (!split[j])
                return NULL;
            k = 0;
            while (k < len)
            {
                split[j][k] = str[start + k];
                k++;
            }
            split[j][k] = '\0';
            j++;
        }
        if (str[i] == ' ')
            i++;
    }
    split[j] = NULL;
    return split;
}
