#include <stdio.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if(argc < 2)
    {
        printf("\n");
        return (0);
    }
    while(argv[1][i] == ' ' || argv[1][i] == '\t')
        i++;

    while(argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n')
    {
        printf("%c", argv[1][i]);
        i++;
    }    
    printf("\n");
    return 0;
}