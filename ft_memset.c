#include "libft.h"
void    *ft_memset(void *b, int c, size_t len)
{
    size_t i = 0;
    unsigned char *bb = (unsigned char)b;
    while(len--)
    {
        *bb++ = (unsigned char)c;
    }
    return b;
}