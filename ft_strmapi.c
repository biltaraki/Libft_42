#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char			*arr;
    unsigned int	i;
    size_t			len;

    if (!s || !f)
        return (NULL);
    
    len = ft_strlen(s);
    arr = malloc(sizeof(char) * (len + 1));
    if (!arr)
        return (NULL);
    
    i = 0;
    while (i < len)
    {
        arr[i] = f(i, s[i]);
        i++;
    }
    arr[i] = '\0';
    return (arr);
}