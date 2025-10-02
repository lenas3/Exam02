int		max(int* tab, unsigned int len)
{
    if(len == 0)    
        return 0;

    int i = 0;
    int max = tab[0];

    while(i < len)
    {
        if(tab[i] > max)
            max = tab[i];
        i++;
    }
    return max;
}

