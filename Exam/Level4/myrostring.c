#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    
    if(argc  < 2)
    {
        write(1, "\n", 1);
        return 0;
    }
        int start = 0;
        int end = 0;
        char *str = argv[1];
        char *word;
        int flag = 1;
        int i = 0;

        while(str[i] == ' ' || str[i] == '\t')
            i++;
        start = i;
        while(str[i] != ' ' && str[i] != '\t')
            i++;
        i--;
        end = i;
        word = malloc((( end - start) + 2) * sizeof(char));
        if(!word)
            return 0;
        int j = 0;
        while(start <= end && str[start])
            word[j++] = str[start++];
        
        start = start + 1;
        while(str[end])
            end++;
        end--;
        while(str[end] == ' ' || str[end] == '\t')
            end--;
        while(start <= end && str[start])
        {
            if(str[start] == ' ' || str[start] == '\t')
            {
                write(1, " ", 1);
                while(str[start] == ' ' || str[start] == '\t')
                    start++;
                start--;
            }
            else
            {
                write(1, &str[start], 1);
                flag = 0;
            }
                
            start++;
        }
        i = 0;
        if(end > start)
            write(1, " ", 1);
        while(word[i])
        {
            write(1, &word[i], 1);
            i++;
        }
        word[i] = '\0';
    write(1, "\n", 1);
    return 0;
}
