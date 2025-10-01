#include "libft.h"
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;
    size_t j = 0; 
    while(dst[i] && i < dstsize) i++;
    size_t o = i;
    while(src[j] && i + j < dstsize - 1)
    {
        dst[i + j] = src[j];
        j++;
    }
    if(i < dstsize)
        dst[j + i] = '\0';
    return (o + ft_strlen(src));
}
