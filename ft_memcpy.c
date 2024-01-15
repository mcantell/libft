void *ft_memcpy(void *dest, const void *src, size_t s)
{
    unsigned char *cis;
    unsigned char *trans;
    int n;

    n = 0;
    *cis = dest;
    *trans = src;
    while (n < s && s > 0)
    {
        cis[n] = trans[n];
        n++;
    }
    return (dest);
}