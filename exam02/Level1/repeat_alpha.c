#include <unistd.h>

int main()
{
    int letter;
    int i;

    i = 0;
    letter = 97;
    while(letter < 123)
    {
        i = 0;
        while(i != letter - 96)
        {
            write(1, &letter, 1);
            i++;
        }
            
        letter++;
    }
}
