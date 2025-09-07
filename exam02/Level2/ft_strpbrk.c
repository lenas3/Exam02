#include <string.h>
#include <stdio.h>

/*
iki string arasında ilk eşleşme bulunduğu anda dönüş yapar
s2 içindeki tüm karakterlerin eşleşmesini beklemiyorsun, sadece 
s1’deki herhangi bir karakter s2 içinde var mı diye bakıyorsun. İlk bulunduğunda döner.
*/ 
char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;

    while(s1[i] != '\0')
    {
        j = 0;
        while(s2[j] != '\0')
        {
           if(s1[i] == s2[j])
            {
                if(s1[i] == s2[j]) 
                    return (char *)(s1 + i);
            }
            j++;
        }
        i++;
    }
    return NULL;
}
