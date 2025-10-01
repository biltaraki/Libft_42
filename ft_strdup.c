#include "libft.h"
char    *ft_strdup(const char *s1)
{
    size_t len = ft_strlen(s1);
    char *arr = malloc(sizeof(char) * (len + 1));
    if(arr == NULL)
    {
        return 0;
    }
    int  i = 0;
    while(len--)
    {
        arr[i] = s1[i];
        i++;
    }
    arr[i] = '\0';
    return arr;
}