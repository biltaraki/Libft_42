#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;

	length = ft_strlen(s) + 1;
	while (length--)
	{
		if (s[length] == (char)c)
			return ((char *)&s[length]);
	}
	return (NULL);
}