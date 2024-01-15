char *ft_strdup(constant char *s1)
{
    size_t len;
    char *s2;
  
    if (s1 == NULL)
        return (NULL);
    len = ft_strlen(*s1);
    s2 = (char *)malloc((len + 1) * sizeof(char));
    ft_strlcpy(s1, s2);
    return (s2);
}