size_t ft_strlcat(char *dest, const char *src, size_t s)
{
    size_t f;
    size_t i;
    
    i = 0;
    f = 0;
    if (s == 0)
    {
        while (src[i] != '\0')
        {
            i++;
        }
        return (i);
    }
    while (f < s && dest[f] != '\0')
    {
        f++;
    }
    while (src[i] != '\0'&& (f + i + 1) < s)
    {
        dest[f + i] = src[i];
        i++;
    }
    dest[f + i] = '\0';
    return (f + i);
}