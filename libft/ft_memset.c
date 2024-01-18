#include "libft.h"

void *ft_memset(void *dest, int i, size_t count)
{
    unsigned char *ptr;
    size_t s;

    s = 0;
    ptr = (unsigned char *)dest;
    while (s < count && count > 0)
    {
        ptr[s] = (unsigned char) i;
        s++;
    }
    return (dest);
}