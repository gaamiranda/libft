#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int size;
    int i;
    int j;
    char    *ptr;

    if (s1 == NULL || s2 ==NULL)
        return (NULL);
    i = 0;
    j = 0;
    size = ft_strlen(s1) + ft_strlen(s2);
    ptr = (char*)malloc(sizeof(char) * (size + 1));
    if (ptr == NULL)
        return (NULL);
    while (s1[i])
    {
        ptr[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        ptr[i] = s2[j];
        i++;
        j++;
    }
    ptr[i] = '\0';
    return (ptr);
}

/*int main()
{
    char *ptr;
    char c[] = "ola123";
    char d[] = "123ola";

    ptr = ft_strjoin(c, d);
    printf("%s", ptr);
    free(ptr);
    return (0);
}*/