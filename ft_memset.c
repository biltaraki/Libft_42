#include <stdlib.h>
char *ft_memset(char *dest , int c , size_t len)
{
    int i = 0;
    while(i < len)
    {
        dest[i] = c;
        i++;
    }
    return dest;
}