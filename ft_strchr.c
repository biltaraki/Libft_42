#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);//cast
		i++;
	}
	if (s[i] == (char)c)//handle finding the null terminator
		return ((char *)&s[i]);//cast
	return (NULL);
}