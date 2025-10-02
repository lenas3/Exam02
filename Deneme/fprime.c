#include <stdlib.h>
#include <stdio.h>

int is_prime(int nbr)
{
    if(nbr < 2)
        return 0;
    if(nbr == 2)
        return 1;
    int i = 2;
    while(i * i <= nbr)
    {
        if(nbr % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while(str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || str[i] == '\n' || str[i] == ' ')
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }

    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign *result);
}

int main(int argc, char **argv)
{
    int nbr;
    int i = 2;
    int first = 1;


    if(argc == 2)
    {
        nbr = ft_atoi(argv[1]);
        
        if(nbr == 1)
        {
            printf("1\n");
            return 0;
        }

        while(i <= nbr)
        {
            if(nbr % i == 0)
            {
                if(!first)
                    printf("*");
                printf("%d", i);
                first = 0;
                nbr /= i;
            
            }
            
            else 
                i++;
        }
    }
    printf("\n");
    return 0;
}
