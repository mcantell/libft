#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t s)
{
    unsigned char *cis;
    unsigned char *trans;
    size_t n;

    n = 0;
    cis = (unsigned char *)dest;
    trans = (unsigned char *)src;
    while (n < s && s > 0)
    {
        cis[n] = trans[n];
        n++;
    }
    return (dest);
}