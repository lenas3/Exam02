unsigned int pgcd(unsigned int a, unsigned int b)
{
    unsigned int temp;
    while(b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return (a);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if(a == 0 || b == 0)
        return 0;

    int x = a * b;
    if(x < 0)
        x *= -1;
    return (x / pgcd(x, y));
}