#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*p;
	unsigned char	C;

	p = (char *)b;
	C = (unsigned char)c;
	while (len--)
	{
		*p = C;
		p++;
	}
	return (b);
}