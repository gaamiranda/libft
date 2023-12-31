#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (needle[j] == '\0')
        return ((char*)haystack);
    while(haystack[i] != '\0' && i < len)
    {
        j = 0;
        while (needle[j] == haystack[i + j] && i + j < len)
        {
            j++;
            if (needle[j] == '\0')
                return((char*)(haystack + i));
        }
        i++;
    }
    return (NULL);
}

/*int main()
{
	char c[] = "oWAiudwad wat wajdn";
	char d[] = "wat";
	printf("%s", ft_strnstr(c, d, 100));
}*/