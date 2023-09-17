#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *uc;

    i = 0;
    uc = (unsigned char*)s;
    c = (unsigned char)c;
    while (i < n && *uc != c)
    {
        uc++;
        n--;
    }
    if (n > 0)
        return ((void*)uc);
    return (NULL);
}

/*int main(){
    char    *ptr;

    char c[] = "ola123";
    ptr = (char*)ft_memchr(c, 'l', sizeof(c));
    if (ptr == NULL)
        printf("pointer is null");
    else
        printf("the pointer is pointing");
    return (0);
}*/