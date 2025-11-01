#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*poi;

	poi = (char *)s;
	while (n--)
	{
		*poi = 0;
		poi++;
	}
}