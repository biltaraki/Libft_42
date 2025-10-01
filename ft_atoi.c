#include "libft.h"
int     ft_atoi(const char *str)
{
    int i = 0;
    int s = 1;
    int r = 0;
    while(str[i] == 32 || str[i] == '\t') i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            s = -s;
        }
        i++;
    }
    while(str[i] <= '9' && str[i] >= '0')
    {
        r = r * 10 + str[i] - '0';
        i++;
    }
    return (r * s);
}