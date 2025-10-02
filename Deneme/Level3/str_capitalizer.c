#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        int i = 0;
        int x = 1;
        
        while(argv[x])
        {
            i = 0;
            char *str = argv[x];
            while(str[i])
            {
                if((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') 
                    && (str[i] >= 'a' && str[i] <= 'z'))
                    str[i] -= 32;
                else if(!(i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') 
                    && (str[i] >= 'A' && str[i] <= 'Z'))
                    str[i] += 32;
                write(1, &str[i], 1);
                i++;
            }  
            if(argv[x + 1])
                write(1, "\n", 1);
            x++;
        }
    }
    write(1, "\n", 1);
    return 0;
    
}
