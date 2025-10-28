#include "libft.h"

static int	ft_len_nbr(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static void	ft_cpy(char *str, long n)
{
	int		i;
	int		arr[20];

	i = 0;
	while (n > 0)
	{
		arr[i] = (n % 10);
		i++;
		n = n / 10;
	}
	i--;
	while (i >= 0)
	{
		*str = arr[i] + '0';
		str++;
		i--;
	}
	*str = '\0';
}

char	*ft_itoa(int n)
{
	char	*arr;
	long	num;

	num = n;
	arr = malloc(sizeof(char) * (ft_len_nbr(num) + 1 + (n <= 0)));// n <= for -n and 0 ++++++1;
	if (!arr)
		return (NULL);
	if (num == 0)
	{
		arr[0] = '0';
		arr[1] = '\0';
		return (arr);
	}
	if (num < 0)
	{
		arr[0] = '-';
		ft_cpy(&arr[1], -num);
		return (arr);
	}
	ft_cpy(arr, num);
	return (arr);
}