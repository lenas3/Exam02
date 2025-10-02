#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[3]);
        char sign = argv[2][0];
        int result = 0;

        if(sign == '+')
            result = a + b;
        else if(sign == '-')
            result = a - b;
        else if(sign == '*')
            result = a * b;
        else if(sign == '%')
            result = a % b;
        else if(sign == '/')
            result = a / b;
        printf("%d", result);
    }
    printf("\n");
    return 0;
}
