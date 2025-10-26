#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;//cats
	const char	*srcs;//cats

	dest = (char *)dst;
	srcs = (const char *)src;
	while (n--)
	{
		*dest = *srcs;
		dest++;
		srcs++;
	}//we don't us '\0'
	return (dst);
}