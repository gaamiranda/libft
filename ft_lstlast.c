#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

/*int main()
{
        t_list *node1 = (t_list *)malloc(sizeof(t_list));
        t_list *node2 = (t_list *)malloc(sizeof(t_list));
        t_list *node3 = (t_list *)malloc(sizeof(t_list));
        
        int a = 2;
        int v = 2;
        int d = 2;
        
        node1 -> content = &a;
        node2 -> content = &v;
        node3 -> content = &d;
        node1 -> next = node2;
        node2 -> next = node3;
        node3 -> next = NULL;
        printf("%p\n", node3);
        printf("%p", ft_lstlast(node1));
        free(node1);
        free(node2);
        free(node3);
        return (0);
}*/
