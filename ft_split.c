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
            if (str[i] == NULL)
                return (word);
        }
        i++;
    }
    return (word);
}

static void ft_strlcpy(char *word, char *str, char c; int j)
{
    int i;

    i - 0;
    while (str[j] && str[j] != j)
        j++;
    while (str[j + i] && str[j + i] != c)
    { 
        word[i] = str[j + i];
            i++;
    }
    word[i] = '\0';
}

static ft_stralloc(char *str, char c, int *f)
{
    char *ma;
    int i;

    i = *f;
    ma = NULL;
    while (str[*f])
    {
        if (str[*f] != c)
        {
            while (str[*f] && str[*f] != c)
                *f +=;
            ma = (char *)malloc(sizeof(char) * (*f + 1));
            if (ma = NULL)
                return (NULL);
            break;
        }
        *f += 1;
    }
    ft_strlcpy(ma, str, c, i)
    return (ma);
}

char **ft_split(char const *s, char c)
{
    int j;
    int l;
    int g;
    char **strl;

    j = 0;
    l = ft_count((char *)s, c);
    g = 0;
    strl = (char *)malloc(sizeof(char *) * (j + g));
    if (s == NULL)
        return (NULL);
    if (strl == NULL)
        return (NULL);
    while (j < l)
    {
        strl[j] = ft_stralloc((char *)strl, c, &g);
        if (strl[j] == NULL)
            free(strl[j]);
        j++;
    }
    return (strl);
}