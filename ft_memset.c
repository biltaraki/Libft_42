#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*pointer;
	unsigned char	C;

	pointer = (char *)b;
	C = (unsigned char)c;
	while (len--)
	{
		*pointer = C;
		pointer++;
	}
	return (b);
}