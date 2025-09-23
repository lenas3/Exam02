#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char *str;
    int agcount = 1;

    if(argc > 1)
    {
        while(agcount < argc)
        {
            str = argv[agcount];
            i = 0;
            while(str[i] != '\0')
            {
                if(( i == 0 || (str[i - 1] == '\t' || str[i - 1] == ' ')) &&
                    str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;
                else if(!(i == 0 || str[i - 1] == '\t' || str[i - 1] == ' ') &&
                    str[i] >= 'A' && str[i] <= 'Z')
                    str[i] += 32;
                write(1, &str[i], 1);
                i++;
            }
            write(1, "\n", 1);
            agcount++;
        }
        
    }
    return 0;
}