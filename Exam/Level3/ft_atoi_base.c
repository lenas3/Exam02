int	ft_atoi_base(const char *str, int base)
{
    int i;
    int result = 0;
    int sign = 1;
    char *number;

    number = (char *)str;
    i = 0;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || str[i] == '\n' || str[i] == '\v')
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
            result = result * base + number[i] - '0';
        else if(str[i] >= 'a' && str[i] <= 'f')
            result = result * base + number[i] - 'W' ;
        else if(str[i] >= 'A' && str[i] <= 'F')
            result = result * base + number[i] - '7'; 
        i++;
    }
    return (sign*result);
}
#include <stdio.h> 
int main(void) 
{
     printf("%d\n", ft_atoi_base("-aa", 16)); 
     return (0);
     }