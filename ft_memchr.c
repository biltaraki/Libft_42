#include "libft.h"
void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned const char *arr = (unsigned const char *)s;
    while(n--)
    {
        if(*arr == c)
        {
            return arr;
        }
        arr++;
    }
    return NULL;
}