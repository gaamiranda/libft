#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *curr;
	t_list *temp;

	curr = *lst;
	while (curr != NULL)
	{
		temp = curr -> next;
		(*del)(curr -> content);
		free(curr);
		curr = temp;
	}
	*lst = NULL;
}
