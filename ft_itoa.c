#include "libft.h"

static int ft_numberlen(int n)
{
    int count;
    
    count = 1;
    while (n/10 != 0)
    {
        count++;
        n /= 10;
    }
    return (count);
}

char    *ft_number()
{
    char    *ptr;
    int size = 9;
    int n = 214748364;

    ptr = (char *)malloc(sizeof(char) * (12));
    ptr[11] = '\0';
    ptr[10] = '8';
    ptr[0] = '-'; 
    while(size > 0)
    {
        ptr[size] = (n % 10) + 48;
        n /= 10;
        size--;
    }
    return (ptr);
}

char    *ft_itoa(int n)
{
    char    *ptr;
    int size;
    int sinal;

    size = ft_numberlen(n);
    sinal = 0;
    if (n == -2147483648)
        return(ft_number());
    if (n < 0)
    {
        sinal = 1;
        n = -n;
    }
    ptr = (char *)malloc(sizeof(char) * (size + 1 + sinal));
    if (ptr == NULL)
        return (NULL);
    if (sinal == 1)
        ptr[0] = '-';
    ptr[size + sinal] = '\0';
    size--;
    while(size >= 0)
    {
        ptr[size + sinal] = (n % 10) + 48;
        n /= 10;
        size--;
    }
    return(ptr);
}

/*int main()
{
    char    *ptr;
    ptr = ft_itoa(-21474368);
    printf("%s", ptr);
    free(ptr);
    return (0);
}*/