#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        int temp = 0;

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