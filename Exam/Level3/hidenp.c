#include <unistd.h>

int main(int argc, char **argv)
{
    char *word;
    char *sentence;
    int i = 0;
    int j = 0;

    if(argc == 3)
    {
        word = argv[1];
        sentence = argv[2];
        while(sentence[i] != '\0' && word[j] != '\0')
        {
            if(word[j] == sentence[i])
                i++;
            j++;
        }
        if(word[j] == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return 0;
}