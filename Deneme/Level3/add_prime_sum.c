#include <unistd.h>

int is_prime(int nb)
{
    int i = 2;
    if(nb < 2)
        return 0;
    if(nb == 2)
        return 1;
    while(i*i <= nb)
    {
        if(nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while(str[i] == ' ' || str[i] =='\t' || str[i] == '\n')
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }

    while(str[i] >= '0' && str[i] <= '9')
    {   
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (sign * res);
}

void ft_putnbr(int nb)
{
    char c;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }

    if(nb >= 10)
        ft_putnbr(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);

}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "0\n", 2);
        return 0;
    }

    int nb = ft_atoi(argv[1]);
    if(nb <= 0)
    {
        write(1, "0\n", 2);
        return 0;
    }
         int sum = 0;

        int i = 0;

        while(i <= nb)
        {
            if(is_prime(i))
                sum += i;
            i++;
        }
        ft_putnbr(sum);
    
    write(1, "\n", 1);
    return 0;
}

