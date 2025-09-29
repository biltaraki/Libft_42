#include "libft.h"
void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dst;
    unsigned const char *s = (unsigned const char *)src;
    while(n--)
    {
        *d++ = *s++;
    }
    return dst;
}