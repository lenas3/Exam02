#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *str = argv[1];
        int i = 0;
        int start = 0;
        int end = 0;
        int first = 1;
        while(str[i])
            i++;
        i--;
        while(i >= 0)
        {
            while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
                i--;
            end = i;
            while(i>= 0 && str[i] != ' ' && str[i] != '\t')
                i--;
            start = i + 1;
            if(first == 0)
                write(1, " ", 1);
            first = 0;    
            while(start <= end)
            {
                write(1, &str[start], 1);
                start++;
            }
            
            i = i - 1;
        }
    }
    write(1, "\n", 1);
    return 0;
}