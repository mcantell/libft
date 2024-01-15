int ft_strlen(constant char *str)
{
    unsigned int i;
    
    i = 0;
    while ( str[i] != 0)
        i++;
    return (i);
}