#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	ix;

	ix = 0;
	while (s[ix])
		ix++;
	return (ix);
}