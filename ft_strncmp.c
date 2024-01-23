#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t s)
{
    while (s > 0 && *str1 == *str2 && *str1 != '\0')
    {
        str1++;
        str2++;
        s--;
    }
    if (s == 0)
        return (0);
    return (*(unsigned char *)str1 - *(unsigned char *)str2);
}