#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t len;
    size_t i;
    char *s2;

    i = 0;
    len = ft_strlen(s1);
    s2 = (char *)malloc((len + 1) * sizeof(char));
    if (s2 == NULL)
        return (NULL);
    while (i < len)
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}