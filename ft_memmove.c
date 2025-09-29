#include "libft.h"
//overlapping memory
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d = (unsigned char *)dst;
    unsigned const char *s = (unsigned const char *)src;
    if(d < s || d >= s + len) // No overlapping memory [^_-]

    {
        while(len--)
        {
            *d++ = *s++;
        }
    }
    else //There is an overlapping memory.
    {
        d += len -1; // -1 ->NULL
        s += len -1;
        while(len--)
        {
            *d-- = *s--;//
        }
    }
    return dst;
}