#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*first;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	first = *lst;
	*lst = new;
	new->next = first;
}