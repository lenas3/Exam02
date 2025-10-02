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
    if(argc == 2)
    {
        int flag = 1;
        int nb = atoi(argv[1]);
        int i = 2;
        while(i <= nb)
        {
            if(is_prime(i) && ((nb % i) == 0))
            {
                
                if(!flag)
                    printf("*");
                printf("%d", i);
                flag = 0;
                nb /= i;
            }
            else 
                i++;
        }
    }
    printf("\n");
    return 0;
}
