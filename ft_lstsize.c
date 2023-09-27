#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}

/*int main()
{
	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	t_list *node2 = (t_list *)malloc(sizeof(t_list));
	t_list *node3 = (t_list *)malloc(sizeof(t_list));
	
	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = NULL;
	printf("%d\n", ft_lstsize(node1));
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/
