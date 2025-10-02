int ft_atoi_base(const char *str, int base)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    char c;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;

    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }

    while (str[i])
    {
        c = str[i];
        int val;

        if (c >= '0' && c <= '9')
            val = c - '0';
        else if (c >= 'a' && c <= 'f')
            val = c - 'a' + 10;
        else if (c >= 'A' && c <= 'F')
            val = c - 'A' + 10;
        else
            break;

        if (val >= base)
            break;

        result = result * base + val;
        i++;
    }

    return sign * result;
}
