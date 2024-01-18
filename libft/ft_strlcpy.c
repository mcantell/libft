#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t s)
{
    size_t i;

    i = 0;
    if (s == 0)
        return (ft_strlen((const char *)src));
    while (i < s - 1 && src[i] != '\0')
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