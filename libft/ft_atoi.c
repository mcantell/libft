int ft_atoi(const char *str)
{
    int i;
    int n;
    int r;

    i = 0;
    n = 1;
    r = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            n *= - 1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        r =  (r * 10) + (str[i] - '0');
        i++;
    }
    return (r * n);
}