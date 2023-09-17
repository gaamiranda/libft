#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    size_t i;

    i = 0;
    if (start >= ft_strlen(s))
    {
        ptr = malloc(1);
        if (ptr == NULL)
            return (NULL);
        ptr[i] = '\0';
        return (ptr);
    }
    ptr = (char*)malloc(sizeof(char) * (len + 1));
    if (ptr == NULL)
        return(NULL);
    while (i < len && s[start] != '\0')
    {
        ptr[i] = s[start];
        i++;
        start++;
    }
    ptr[i] = '\0';
    return (ptr);
}

/*int main()
{
    char    *ptr;
    int i;
    int size;
    char c[] = "ola123456789";

    i = 0;
    size = 4;
    ptr = ft_substr(c, 5, 4);
    while(i < size)
    {
        printf("%c", ptr[i]);
        i++;
    }
    free(ptr);
    return (0);
}*/