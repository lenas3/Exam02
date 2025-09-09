#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int repeat;
    char letter;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            letter = argv[1][i];
            if (letter >= 'a' && letter <= 'z')
                repeat = letter - 'a' + 1;
            else if (letter >= 'A' && letter <= 'Z')
                repeat = letter - 'A' + 1;
            else
                repeat = 1;

            while (repeat > 0)
            {
                write(1, &letter, 1);
                repeat--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
