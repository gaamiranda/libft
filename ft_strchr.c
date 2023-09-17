#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        if (s[i] == (char)c)
            return((char*)(s + i));
        i++;
    }
    if ((char)c == '\0')
        return((char*)(s + i));
    return(NULL);
}

/*int main(){
    char    *ptr;

    char c[] = "ola123";
    ptr = (char*)ft_strchr(c, '\0');
    if (ptr == NULL)
        printf("pointer is null");
    else
        printf("the pointer is pointing");
    return (0);
}*/