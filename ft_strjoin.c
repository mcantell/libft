#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *s;
    int i;
    int f;

    i = 0;
    f = 0;
    s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)+ 1);
    if (s == NULL)
        return (NULL);        
    while (s1[i])
    {
        s[i] = s1[i];
        i++;
    }
    ft_strlcat(*s, *s2, len);
    return (s);
}