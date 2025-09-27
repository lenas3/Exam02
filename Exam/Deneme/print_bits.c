#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char result = 0;

    while(i > 0)
    {
        result = (octet >> i & 1) + '0';
        write(1, &result, 1);
        i--;
    } 
}