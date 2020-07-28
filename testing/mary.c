int     float_prog(double a) // double
{
    unsigned long int bits;
    int bit;
    int sing;
    int exp;

    bits = *(__uint128_t *)&a;
    sing = (bits >> 63) & 1;
    bit = 51;
    exp = ((bits >> 52) & 0x7ff) - 1023;
    int g = 63;
    while (g >= 0)
    {
        if (((bits >> g) & 1) == 1)
            printf("1");
        else 
            printf("0");
        if (g == 63 || g == 52)
            printf(" ");
        g--;
    }
}

int main()
{
    double a = 12.358;
    float_prog(a);
}