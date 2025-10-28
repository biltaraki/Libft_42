#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	total_size;

	total_size = count * size;
	tmp = malloc(total_size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, total_size);
	return (tmp);
}