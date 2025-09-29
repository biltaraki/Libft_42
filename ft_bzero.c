#include <stdlib.h>
void ft_bzero(char *s , size_t n)
{
    int i = 0;
    while(i < n)
    {
        s[i] = 0;
        i++;
    }
}