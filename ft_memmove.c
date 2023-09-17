#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *dest;
    unsigned char   *source;

    if (dst == NULL && src == NULL)
        return (NULL);
    dest = (unsigned char*)dst;
    source = (unsigned char*)src;
    if (dst < src)
        return (ft_memcpy(dst, src, len));
    while (len--)
    {
        dest[len] = source[len];
    }
    return(dst);
}


/*int main(){
    char dest[] = "oldstring2";
    char src[] = "newstring";
    ft_memmove(dest, src, sizeof(src));
    printf("%s", dest);
    return (0);
}*/