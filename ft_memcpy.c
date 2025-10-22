#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*srcs;

	dest = (char *)dst;
	srcs = (const char *)src;
	while (n--)
	{
		*dest = *srcs;
		dest++;
		srcs++;
	}
	return (dst);
}