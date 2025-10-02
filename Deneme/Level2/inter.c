#include <unistd.h>

int is_printed(char *str, char c, int index)
{
    int i = 0;
    while(i < index)
    {
        if(str[i] == c)
            return 1;
        i++;
    }
    return 0;
}
int is_in(char *str, char c)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i = 0;
        int j = 0;
        char *str1 = argv[1];
        char *str2 = argv[2];

        while(str1[i] && str2[j])
        {
            if( !is_printed(str1, str1[i], i) && is_in(str2, str1[i]))
                write(1, &str1[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}