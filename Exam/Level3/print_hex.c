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


void ft_putnbr_hex(unsigned int n)
{
    char  *hex = "0123456789abcdef";

    if(n >= 16)
        ft_putnbr_hex(n / 16);
    write(1, &hex[n % 16], 1);
}
int main(int argc, char **argv)
{
    if(argc == 2)
        ft_putnbr_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
    return 0;
}