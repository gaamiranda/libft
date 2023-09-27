#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}

/*int main()
{
	t_list *node;
	node = ft_lstnew("ola 123");
	printf("%s", (char *)node -> content);
	free (node);
	return (0);
}*/
