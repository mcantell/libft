char *ft_strchr(const char *str, int i)
{
    while (*str != '\0')
    {
        if (*str == (char)i)
            return (str);
        str++;
    }
    return (NULL);
}