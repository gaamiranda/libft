#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;
    char   *dest;
    char   *source;

    i = 0;
    if (dst == NULL && src == NULL)
        return (dst);
    dest = (char*)dst;
    source = (char*)src;
    while(i < n)
    {
        dest[i] = source[i];
        i++;
    }
    return (dest);
}

/*int main(){
    char dest[20];
    char src[] = "ola123";
    ft_memcpy(dest, src, sizeof(src));
    printf("%s", dest);
    return (0);
}*/