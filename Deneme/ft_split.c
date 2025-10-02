
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char **ft_split(char *str)
{
    char **res;
    int i = 0;
    int start = 0;
    
    while((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') && (str[i] != ' ' && str[i] != '\t'))
        i++;
    start = i;
    while(str[i] != ' ' && str[i] != '\t')
        i++;
    int len = i - start;
    res = malloc((len + 1) * sizeof(char));
    if(!res)
        return NULL;

    i = 0;
    while(str[i])
    {
        if(str[i] != ' ' && str[i] != '\t')
        {
            int start = i;
            while(str[i])
        }
    }
}

int main(void)
{
    char *tests[] = {
        "hello world",
        "a b c d e",
        "singleword",
        "",
        "tab\ttest",
        "Mix of tabs\tand spaces",
        "End with tab\t",
        NULL
    };

    int t = 0;
    while(tests[t])
    {
        printf("Test %d: \"%s\"\n", t + 1, tests[t]);
        char **words = ft_split(tests[t]);
        if(!words)
        {
            printf("  -> Returned NULL\n");
        }
        else
        {
            int i = 0;
            while(words[i])
            {
                printf("  Word[%d]: '%s'\n", i, words[i]);
                free(words[i]);
                i++;
            }
            free(words);
        }
        printf("\n");
        t++;
    }
    return 0;
}