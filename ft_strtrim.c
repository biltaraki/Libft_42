#include "libft.h"

static int	ft_check_trim(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

static int	get_trimmed_length(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1 || !set)
		return (0);
	
	start = 0;
	end = ft_strlen(s1) - 1;
	
	// Find start of non-trimmed portion
	while (s1[start] && ft_check_trim(s1[start], set))
		start++;
	
	// Find end of non-trimmed portion
	while (end >= start && ft_check_trim(s1[end], set))
		end--;
	
	// Return length of trimmed portion
	return (end - start + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	int		i;
	char	*arr;

	if (!s1 || !set)
		return (NULL);
	
	len = get_trimmed_length(s1, set);
	if (len < 0)
		len = 0;
	
	arr = malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	
	// Find start position
	start = 0;
	while (s1[start] && ft_check_trim(s1[start], set))
		start++;
	
	// Copy the trimmed portion
	i = 0;
	while (i < len)
	{
		arr[i] = s1[start + i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}