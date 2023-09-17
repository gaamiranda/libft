#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char    *ptr;

    i = 0;
    ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (ptr == NULL)
        return (NULL);
    while(s[i] != '\0')
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}