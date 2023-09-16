#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_wordlength(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	*ft_help(char const *str, char c)
{
	int		i;
	char	*ptr;
	
	i = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_wordlength(str, c) + 1));
	while (str[i] && str[i] != c)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static int	ft_countwords(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ptr;

	i = 0;
	j = 0;
	ptr = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
			ptr[j++] = ft_help(&s[i], c);
		while (s[i] != c && s[i])
			i++;
	}
	ptr[j] = NULL;
	return (ptr);
}

/*int main(){
	char	**ptr;
	int	i;
	char	str[] = "     Ajuda deus pai     nosso     !    ";
	char	c = ' ';

	i = 0;
	ptr = ft_split(str, c);
	while (ptr[i])
	{
		printf("%s\n", ptr[i]);
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}*/
