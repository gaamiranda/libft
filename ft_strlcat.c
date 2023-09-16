#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (dst[len] && len < size)
		len++;
	while (src[i] && (len + i + 1) < size)
	{
		dst[len + i] = src[i];
		i++;
	}
	if (len + i < size)
		dst[len + i] = '\0';
	while (src[i])
		i++;
	return (len + i);
}

/*int main()
{
	char	dst[] = "ola";
	char	src[] = "adeus";
	size_t		size = 4;
	printf("%ld", ft_strlcat(dst, src, size));
	return (0);
}*/
