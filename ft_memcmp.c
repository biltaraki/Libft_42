#include "libft.h"
int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned const char *x1 = (unsigned const char *)s1;
    unsigned const char *x2 = (unsigned const char *)s2;
    while(n--)
    {
        if(*x1 != *x2)
        {
            return *x1 - *x2;
        }
        x1++;
        x2++;
    }
    return 0;
}