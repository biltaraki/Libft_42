#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*array;

	len = ft_strlen(s1) + 1;//header
	array = (char *)malloc(sizeof(char) * len);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		array[i] = s1[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}