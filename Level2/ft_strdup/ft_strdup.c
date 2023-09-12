#include <unistd.h>
#include <stdlib.h>

size_t  ft_strlen(char *str)
{
    size_t length;

    length = 0;
    while (*str++)
        length++;
    return (length);
}

char    *ft_strdup(char *src)
{
    int i;
    char    *dup;

    i = 0;
    dup = (char *)malloc(sizeof(char) * ft_strlen(src));
    while (*src)
        dup[i++] = *src++;
    dup[i] = '\0';
    return (dup);
}
