#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *uc;

    i = 0;
    uc = (unsigned char*)s;
    while (i < n)
    {
        uc[i] = 0;
        i++;
    }
}

/*int main(){
    char s[20];
    int i;

    i = 0;
    ft_bzero(s, sizeof(s));
    while (i < sizeof(s))
    {
        printf("%d ", s[i]);
        i++;
    }
    return 0;
}*/