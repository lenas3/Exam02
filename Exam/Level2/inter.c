#include <unistd.h>

int is_in_str(char *str, char c, int line)
{
    int i = 0;
    while(i < line)
    {
        if(str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    char *word;
    char *sentence;
    int i = 0;
    int senlen = 0;

    if(argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    word = argv[1];
    sentence = argv[2];

    while(sentence[senlen])
        senlen++;

    while(word[i])
    {
        if(!is_in_str(word, word[i], i) && is_in_str(sentence, word[i], senlen))
            write(1, &word[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}