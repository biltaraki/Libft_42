#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*new_list;
    t_list	*node;
    void	*new_content;

    if (!lst || !f || !del)
        return (NULL);
    
    new_list = NULL;
    
    while (lst)
    {
        // Apply function to current content
        new_content = f(lst->content);
        if (!new_content)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        
        // Create new node with transformed content
        node = ft_lstnew(new_content);
        if (!node)
        {
            del(new_content); // Clean up the allocated content
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        
        // Add node to the new list
        ft_lstadd_back(&new_list, node);
        lst = lst->next;
    }
    
    return (new_list);
}