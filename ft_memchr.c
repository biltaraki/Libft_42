#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cop;
	size_t				i;

	cop = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (cop[i] == (unsigned char)c)
			return (&cop[i]);
		i++;
	}
	return (NULL);
}