#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i = ft_strlen(s);

    while (i >= 0)
    {
        if ((unsigned char)c == (unsigned char)s[i])
            return ((char *)(s + i));
        i--;
    }
    return NULL;
}
