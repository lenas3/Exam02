#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int a, b;
    int temp = 0;

    if(argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        while(b != 0)
        {
            temp = a % b;
            a = b;
            b = temp;
        }
       printf("%d", a);
    }
    printf("\n");
    return 0;
}