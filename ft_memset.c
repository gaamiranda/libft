#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
        size_t          i;
        unsigned char   *uc;

        i = 0;
        uc = (unsigned char*)b;
        while (i < len)
        {
                uc[i] = c;
                i++;
        }
        return (b);
}

/*int main() {
    char buffer[20];
    ft_memset(buffer, 38, sizeof(buffer));
    printf("Buffer after ft_memset: %s\n", buffer);
    return (0);
}*/