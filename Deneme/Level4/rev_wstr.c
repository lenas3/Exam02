#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        char *str = argv[1];
        int start = 0;
        int end = 0;

        while(str[start])
            start++;
        start--;
        
        while(start >= 0)
        {   
            end = start;
            while((start >= 0) && (str[start] != ' ' && str[i] != '\t'))
                start--;
            start++;
            i = start;
            while(i <= end)
            {
                write(1, &str[i], 1);
                i++;
            }
            if(start > 0)
                write(1, " ", 1);
            start--;
        }
    }
    write(1, "\n", 1);
    return 0; 
}