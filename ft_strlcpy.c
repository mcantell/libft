size_t ft_strlcpy(char *dest, const char *src, size_t s)
{
    size_t i;

    i = 0;
    if (s == 0)
    {
        while (src[i] != '\0')
        {
            i++;
        }
            return (i);
    }
    while (i < s && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    while (src[i] != '\0')
    {
        i++;
    }
    return (i);
}