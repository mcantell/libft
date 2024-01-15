#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t b;
    void *f;
    
    b = count * size;
    f = malloc(b);
    if (f == NULL)
        return (NULL);
    ft_bzero(f, b);
    return (f);
}