#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sinal;
    int res;

    i = 0;
    res = 0;
    sinal = 1;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sinal = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        if (sinal == -1)
            res = res * 10 - (str[i] - 48);
        else
            res = res * 10 + (str[i] - 48);
        i++;
    }
    return(res);
}