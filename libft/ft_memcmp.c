#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *cis;
    const unsigned char *trans;

    cis = s1;
    trans = s2;
    while (n > 0)
    {
        if (*cis != *trans)
         return (int)(*cis - *trans);
        cis++;
        trans++;
        n--;
    }
    return (0);
}