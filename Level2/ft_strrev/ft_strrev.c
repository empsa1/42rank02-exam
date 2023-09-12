#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

size_t  ft_strlen(char *str)
{
    size_t length = 0;
    while (*str++)
        length++;
    return (length);
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    size_t size = ft_strlen(str);
    char *temp = (char *)malloc(sizeof(char) * size);
    while (str[i])
        temp[i] = str[i++];
    while(i >= 0)
        str[i--] = temp[j++];
    free(temp);
    return (str);
}