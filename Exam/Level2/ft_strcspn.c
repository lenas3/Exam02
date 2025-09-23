#include <stdio.h>
#include <string.h>

/*
s stringinin başından başlayarak, reject içinde yer alan 
ilk karaktere kadar olan uzunluğu döndürür. Yani baştan 
itibaren reddedilen karaktere kadar kaç karakter geçtiğini sayar.
*/
size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;

    while(s[i] != '\0')
    {
        j = 0;
        while(reject[j])
        {
            if(reject[j] == s[i])
                return i;
            j++;
        }
        i++;
    }
    return i;
}

