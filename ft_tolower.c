int ft_tolower(int  i)
{
    if (i >= 97 && i <= 122)
        i -= 32;
    return (i);
}