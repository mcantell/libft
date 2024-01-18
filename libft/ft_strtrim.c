#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
   size_t i;
   size_t l;
   char *str;

   i = 0;
   str = NULL;
   l = ft_strlen(s1);
   if (s1 && str)
   {
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    while ((s1[l - 1]) && ft_strchr(set, s1[l - i + 1]) && l > i)
        l--;
   str = (char *)malloc(sizeof(char) * (l - i + 1));
   if (!str)
    return (NULL);
    if (str)
    ft_strlcpy(str, &s1[i], l - i + 1);
   }
   return (str);
}
