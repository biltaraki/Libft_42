#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*srcs;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	srcs = (const unsigned char *)src;
	i = 0;
	// Check for overlapping memory regions
	if (dest > srcs)
	{
		// Copy from end to beginning (backwards)
		while (len > 0)
		{
			len--;
			dest[len] = srcs[len];
		}
	}
	else
	{
		// Copy from beginning to end (forwards)
		while (i < len)
		{
			dest[i] = srcs[i];
			i++;
		}
	}
	return (dst);
}