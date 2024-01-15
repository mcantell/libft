#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *f;
    size_t t;

    t = 0;
    if (*s == 0 || !f)
        return (NULL);
    f = (char *)malloc(sizeof(*s) * (len + 1))
    while (s[t])
    {
        if (t >= start)
            ft_strlcpy(*s, *f, len);
        t++;
    }
    return (f)
}
