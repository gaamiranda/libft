#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while(i >= 0)
    {
        if (s[i] == (char)c)
            return((char*)(s + i));
        i--;
    }
    return(NULL);
}

/*int main(){
    char    *ptr;

    char c[] = "ola123";
    ptr = (char*)ft_strrchr(c, 'o');
    if (ptr == NULL)
        printf("pointer is null");
    else
        printf("the pointer is pointing");
    return (0);
}*/