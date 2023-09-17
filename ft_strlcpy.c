#include "libft.h"

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;
    int size;

    size = ft_strlen(src);
    if (dstsize == 0)
      return (size);
    i = 0;
    while (i < dstsize - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(size);
}

/*int main()
{
    char c[] = "ola212";
    char d[] = "hello";
    printf("%zu", ft_strlcpy(c, d, 0));
    printf("%s", c);
}*/