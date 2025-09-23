#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || 
        str[i] == '\f' || str[i] == '\n' || str[i] == '\v' )
        i++;
    
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] -  '0');
        i++;
    }
    return (sign * result);
}

int ft_putnbr(int n)
{
    if(n < 0)
    {
        write(1, "-", 1);
        n *= -1;
    }
    if(n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else 
    {
        n += '0';
        write(1, &n, 1);
    }

}

#include <unistd.h>

int main(int argc, char **argv)
{
    int num;
    int a = 1;
    int multiply = 1;

    if(argc == 1)
    {
        write(1, "\n", 1);
        return 0;
    }
    num = ft_atoi(argv[1]);
    while(a <= num)
    {
        multiply = a * num;
        ft_putnbr(a);
        write(1, " x ", 3);
        ft_putnbr(num);
        write(1, " = ", 3);
        ft_putnbr(multiply);
        write(1, "\n", 1);
        a++;
    }
}