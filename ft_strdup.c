#include "libft.h"

char *ft_strdup(const char *s1)
{
    int i;
    char    *ptr;
    int size;

    i = 0;
    size = ft_strlen(s1);
    ptr = ((char*)malloc(sizeof(char) * size + 1));
    if (ptr == NULL)
        return (NULL);
    while (s1[i])
    {
        ptr[i] = s1[i];
        i++;
    }
    ptr[i] = '\0';
    return(ptr);
}

/*int main()
{
    char    *ptr;
    int i;
    int size;
    char c[] = "ola123";

    i = 0;
    ptr = ft_strdup(c);
    size = 6;
    while (i < size)
    {
        printf("%c ", ptr[i]);
        i++;
    }
    free(ptr);
    return (0);
}*/