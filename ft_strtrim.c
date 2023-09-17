#include "libft.h"
#include <stdio.h>

static int	ft_help(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		size;
	int		j;

	i = 0;
	j = 0;
	size = ft_strlen(s1) - 1;
	while (ft_help(s1[i], set) == 1)
		i++;
	while (ft_help(s1[size], set) == 1)
		size--;
	if (size < i)
	{
		if (!(ptr = (char *)malloc(1)))
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (!(ptr = (char *)malloc(sizeof(char) * (size - i + 2))))
		return (NULL);
	size++;
	while (i < size)
	{
		ptr[j] = s1[i];
		j++;
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}

/*int	main()
{
	char	*ptr;
	char	*s1 = "";
	char	*set = "";

	ptr = ft_strtrim(s1, set);
	printf("%s\n", ptr);
	free (ptr);
	return (0);
}*/
