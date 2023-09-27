#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head;
	t_list *curr;

	if (lst == NULL || f == NULL)
                return (NULL);
	curr = (t_list *)malloc(sizeof(t_list));
	head = NULL;
	while (lst != NULL)
	{
		curr = ft_lstnew((*f)(lst -> content));
		if (curr == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, curr);
		lst = lst -> next;
	}
	return (head);
}
