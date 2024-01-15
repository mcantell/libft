int ft_strncmp(const char *str1, const char *str2, size_t s)
{
    while (s > 0 && (*str1 != '\0'|| *str2 != '\0'))
    {
        if (*str1 != *str2)
            return (int)(*str1 - *str2)
        str1++;
        str2++;
        n--;
    }
    return (0);
}