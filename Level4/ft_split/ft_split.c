#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int condition1(char c) //type of macro to turn code less verbose
{
    if (c == ' ' || c == '\n' || c == '\t')
        return 1;
    return (0);
}

void    ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0' && condition1(src[i]) == 0)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

size_t  sizeofEOW(char *str)
{
    size_t length = 0;
    while (condition1(*str) == 1 && *str != '\0')
        str++;
    while (condition1(*str) == 0 && *str++ != '\0')
        length++;
    return (length);
}

size_t  wc(char *str)
{
    if (!str)
        return (0);
    size_t length = 1;
    while(*str != '\0')
    {
        if (condition1(*str) == 1)
        {
            while (condition1(*str) == 1 && *str != '\0')
                str++;
            length++;
        }
        else
            str++;
    }
    return (length);
}

char    **ft_split(char *str)
{
    char    **result = (char **)malloc(sizeof(char *) * wc(str) + 1);
    int i = 0;
    int temp;
    int j = 0;
    while (str[i] != '\0')
    {
        if (condition1(str[i]) == 0)
        {
            temp = sizeofEOW(&(str[i]));
            result[j] = (char *)malloc(sizeof(char) * temp);
            ft_strcpy(result[j], &(str[i]));
            i = i + temp;
            j++;
        }
        else
            i++;
    }
    return (result);
}

void main(int argc, char **argv)
{
    char **ptr;
    int i = 0;
    ptr = ft_split(argv[1]);
    while (ptr[i] != NULL)
        printf("%dº word: *%s*\n",i, ptr[i++]);
}
