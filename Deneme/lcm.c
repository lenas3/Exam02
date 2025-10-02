int pgcd(int a, int b)
{
    int temp;

    while(b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;   
    }
    return a;
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if(a == 0 || b == 0)
        return 0;
    return (a / pgcd(a, b) * b);
}