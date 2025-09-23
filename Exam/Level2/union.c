#include <unistd.h>

int  is_in_str(char *str, char c, int len)
{
    int i = 0;

    while(i < len)
    {
        if(str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int len = 0;

    char *sentence;
    char *word;
    
    if(argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    word = argv[1];
    sentence = argv[2];
    while(word[i])
    {
        if(!is_in_str(word, word[i], i))
            write(1, &word[i], 1);
        i++;
    }
    
    while(word[len])
        len++;

    while(sentence[j])
    {
        if(!is_in_str(word, sentence[j], len) && !is_in_str(sentence, sentence[j], j))
            write(1, &sentence[j], 1);
        j++;
    }
    write(1, "\n", 1);
    return 0;
}