#include <stdlib.h>
#include <stdio.h>

int is_prime(int nb)
{
    if(nb < 2)
        return 0;
    if(nb == 2)
        return 1;
    int i = 2;
    while(i * i <= nb)
    {
        if(nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main(int argc, char **argv)
{
    int i = 2;
    int nb;
    int first = 1;

    if(argc == 2)
    {
        nb = atoi(argv[1]);
        if(nb == 1)
        {
            printf("1\n");
            return 0;
        }
        if(nb == 2)
        {
            printf("2\n");
            return 0;
        }
        while(nb > 2)
        {
            if(is_prime(i))
            {
                while(nb % i == 0)
                {
                    if(!first)
                        printf("*");
                    printf("%d", i);
                    nb = nb / i;
                    first = 0;
                }
            }
        i++;
        }
    }
    printf("\n");
    return 0;
}