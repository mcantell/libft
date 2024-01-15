static unsigned int ft_intstr(unsigned int n)
{
    unsigned int l;

    l = 0;
    if (n == 0)
        return (1);
    if (n < 0)
        l += 1;
    while (n != 0)
    {
        n /= 10;
        l++;
    }
    return (l);
}

char ft_itoa(int i)
{
    int j;
    char *str;
    int len;

    j = 0;
    len = ft_intstr(i);
    str = (char *)malloc(sizeof(char *) * (len + 1));
    if (str == NULL)
        return (NULL);
    if (i < 0)
    {
        str[0] = '-';
        j = -i;
    }
    else
        j = i;
    while (n != 0)
    {
        str[len - 1] = (j % 10) + '0';
        j = j / 10;
        len--;
    }
    return (str);
}