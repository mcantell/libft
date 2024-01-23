#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t s)
{
    unsigned char *cis;
    unsigned char *trans;
    size_t n;

    n = 0;
    cis = (unsigned char *)dest;
    trans = (unsigned char *)src;
    if (!dest && !src && s > 0)
        return (NULL);
    if (trans < cis)
    {
        while (s--)
           cis[s] = trans[s];
    }
    else
        {
            while (s != 0)
            {
                cis[n] = trans[n];
                n++;
                s--;
            }
        }
        return (dest);
}