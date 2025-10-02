#include <unistd.h>

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

void putnbr(int nb)
{
    char c;
    if(nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if(nb >= 10)
        putnbr(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        int i = 0;
        int nb = ft_atoi(argv[1]);
        while(i <= 9)
        {
            putnbr(i);
            write(1, " x ", 3);
            putnbr(nb);
            write(1, " = ", 3);
            int x = i * nb;
            putnbr(x);

            if(i < 9)
                write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}