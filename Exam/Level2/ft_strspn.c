#include <string.h>
#include <stdio.h>

/*
s stringinin başından başlayarak, sadece accept içinde yer alan karakterlerden 
oluşan uzunluğu döndürür. Başka bir deyişle, baştan itibaren kaç karakterin kabul 
edilen karakterler setinde olduğunu sayar.
*/ 

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j = 0;
    int count = 0;

    while(s[i] !='\0')
    {
        j = 0;
        while(accept[j] != '\0')
        {
            if(accept[j] == s[i])
                count++;
            j++;
        }
        i++;
    }
    return (count);
}
