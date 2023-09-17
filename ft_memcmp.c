#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char*   ss1;
    unsigned char*   ss2;

    ss1 = (unsigned char*)s1;
    ss2 = (unsigned char*)s2;
    i = 0;
    while(i < n)
    {
        if(ss1[i] != ss2[i])
            return(ss1[i] - ss2[i]);
        i++;
    }
    return(0);
}

/*int main(){
    char c[] = "ola123";
    char d[] = "ola223";
    printf("%d", ft_memcmp(c, d, 6));
}*/