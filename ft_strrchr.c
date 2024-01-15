#include "libft.h"

char *ft_strrchr(const char *str, int i)
{
    int b;

    b = ft_strlen(str);

    while (b != 0)
    {
        if (*str == (char)i)
            return (str);
        b--;
    }
    return (NULL);
}