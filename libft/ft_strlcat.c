#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t s)
{
    size_t f;
    size_t i;
    
    i = 0;
    f = 0;
    if (s == 0)
        return (ft_strlen(src));
    while (f < s && dest[f] != '\0')
        f++;
    if (f >= s)
        return (f + ft_strlen(src));
    while (src[i] != '\0'&& (f + i) < s - 1)
    {
        dest[f + i] = src[i];
        i++;
    }
    dest[f + i] = '\0';
    return (ft_strlen(src) + f);
}