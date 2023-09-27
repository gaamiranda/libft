#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	curr = *lst;
	while (curr -> next != NULL)
		curr = curr -> next;
	curr -> next = new;
}

/*int	main()
{
	t_list *head;
        t_list *node1 = (t_list *)malloc(sizeof(t_list));
        t_list *node2 = (t_list *)malloc(sizeof(t_list));
        t_list *node3 = (t_list *)malloc(sizeof(t_list));
        int d = 4;
        int e = 2;
        int f = 42;

        head = NULL;
        node1 -> content = &d;
        node2 -> content = &e;
        node3 -> content = &f;
        ft_lstadd_back(&head, node1);
        ft_lstadd_back(&head, node2);
        ft_lstadd_back(&head, node3);
        while (head != NULL)
        {
                printf("%d", (*(int *)head -> content));
                head = head -> next;
        }
        free(node1);
        free(node2);
        free(node3);
        return (0);
}*/
