#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	int	i;
	int	word;
	int	ft_cke;

	i = 0;
	word = 0;
	ft_cke = 1;
	while (s[i])
	{
		if (ft_cke && s[i] != c)
		{
			word++;
			ft_cke = 0;
		}
		if (s[i] == c)
			ft_cke = 1;
		i++;
	}
	return (word);
}

int	ft_char_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		j;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!arr)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = ft_char_count(&s[i], c);
		arr[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (!arr[j])
			return (NULL);
		ft_memcpy(arr[j], &s[i], len);
		arr[j][len] = '\0';
		i += len;
		j++;
	}
	arr[j] = NULL;
	return (arr);
}