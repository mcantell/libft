#include "libft.h"

char *ft_strchr(const char *str, int i)
{
    while (*str != '\0')
    {
        if (*str == (char)i)
            return ((char *)str);
        str++;
    }
    if (i == '\0')
        return ((char *)str);
    return (NULL);
}