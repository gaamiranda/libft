#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while(i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if (s1[i] != s2[i])
            return((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return(0);
}

/*int main()
{
    char c[] = "ola123";
    char d[] = "ola123";
    printf("%d", ft_strncmp(c, d, 9));
}*/