#include "libft.h"

char *ft_strnstr(const char *h, const char *n, size_t lenh)
{
    size_t lenn;

    lenn = ft_strlen(n);
    if (lenn == 0)
        return (char *)h;
    while (lenh > lenn && *h)
    {
        if (ft_strncmp(h, n, lenn) == 0)
            return (char *)h;
        h++;
        lenh--;
    }
    return (NULL);
}