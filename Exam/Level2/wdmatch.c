
#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    char *s1 = argv[1];
    char *s2 = argv[2];

    if(argc == 3)
    {
        while(s1[i] != '\0' && s2[j] != '\0')
        {
            if(s1[i] == s2[j])
            {
                i++;
                j++;
            }
            if(s1[i] == '\0')
            {
                i = 0;
                while(s1[i] != '\0')
                {
                    write(1, &s1[i], 1);
                    i++;
                }
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}