#include "libft.h"
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;
    size_t len_s = ft_strlen(src);
    if(!dst || !src)
    {
        return 0;
    }
    if(dstsize == 0)
    {
        return len_s;
    }

        while(src[i] && i < dstsize - 1)
            {
                dst[i] = src[i];
                i++;
            }
        dst[i] = '\0';
    return len_s;
}
