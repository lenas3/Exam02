int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int sign = 1;
    int result = 0;
    char *number;

    number = (char *)str;
    i = 0;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] != '\0')
    {
        if(str[i]>= '0' && str[i]<= '9')
            j = str[i] -
        else if(str[i]>= 'a' && str[i]<= 'z')
            result = result * base + (str[i] + 'W');
        else if(str[i]>= 'A' && str[i]<= 'Z')
            result = result * base + (str[i] + '7');
        i++;
    }
    return (sign * result);
}
