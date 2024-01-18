#include "libft.h"

void *ft_memchr(const void *str, int i, size_t s)
{
    unsigned char *ptr;

    ptr = (unsigned char *)str;
    i = (unsigned char)i;
    while (*ptr != i && s)
    {
        ptr++;
        s--;
    }
    if (s)
        return ((void *)ptr);
    return (NULL);
}