void *ft_memchr(const void *str, int i, size_t s)
{
    unsigned char *ptr;

    *ptr = s;
    while (s > 0)
    {
        if (*ptr == (unsigned char)s)
            return (void *)p;
        ptr++;
        s--;
    }
    return (0);
}