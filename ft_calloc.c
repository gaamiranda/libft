#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    char    *ptr;
    size_t i;

    i = 0;
    ptr = (char*)malloc(count * size);
    if (ptr == NULL)
        return(NULL);
    while (i < count * size)
    {
        ptr[i] = 0;
        i++;
    }
    return (ptr);
}

/*int main()
{
    char    *ptr;
    int i;
    int size;

    i = 0;
    ptr = ft_calloc(5, 4);
    size = 20;
    while (i < size)
    {
        printf("%d", ptr[i]);
        i++;
    }
    free(ptr);
    return (0);
}*/