#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	index = 0;
	while (haystack[index] && index < len)
	{
		j = 0;
		while (needle[j] && (index + j) < len && needle[j] == haystack[index + j])
			j++;
		if (!needle[j])
			return ((char *)&haystack[index]);
		index++;
	}
	return (NULL);
}