#include "libft.h"

static int ft_count(char *str, char c)
{
    int i;
    int word;

    i = 0;
    word = 0;
    while (str[i] != '\0')
    {
        if (str[i] != c)
        {
            word++;
            while (str[i] != c && str[i])
                i++;
        }
        else
            i++;
    }
    return (word);
}

char **ft_split(char const *s, char c)
{
    char **str;
    size_t i;
    size_t f;

    i = 0;
    if (!s)
        return (NULL);
    str = malloc(sizeof(char *)* (ft_count((char *)s, c) + 1));
    if (!str)
        return (NULL);
    while (*s)
    {
        if (*s != c)
        {
            f = 0;
            while (*s && *s != c && f++)
                s++;
            str[i] = ft_substr(s - f, 0, f);
                i++;
        }
        else
            s++;
    }
    str[i] = NULL;
    return (str);
}
