void *ft_memmove(void *dest, const void *src, size_t s)
{
    unsigned char *cis;
    unsigned char *trans;

    *cis = dest;
    *trans = src;
    if (cis == trans || s == 0)
        return (dest);
    if (cis < trans || cis > trans + s)
        while (s--)
            *cis++ = *trans++;
        else
        {
            cis += n;
            trans += n;
            while (n--)
            {
                *(-cis) = *(--trans)
            }
        }
        return (dest);
}