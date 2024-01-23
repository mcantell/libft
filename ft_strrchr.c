#include "libft.h"

char *ft_strrchr(const char *str, int i)
{
    int b;

    b = ft_strlen(str);
    if (i == '\0')
        return ((char *)str + b);
    while (b >= 0)
    {
        if (str[b] == i)
            return ((char *)str + b);
        b--;
    }
    return (NULL);
}