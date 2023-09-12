#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


size_t  ft_strlen(char *str)
{
    size_t length;

    length = 0;
    while (*str++ != '\0')
        length++;
    return (length);
}

char    *ft_strchr(const char *str, int c)
{
    while (*str++ != '\0')
        {
            if (*str == c)
                return ((char*)str);
        }
    return (NULL);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    char *result;

    i = 0;
    j = 0;
    result = (char *)malloc(ft_strlen(argv[1]) + ft_strlen(argv[2]) + 1);
    while (argv[1][i] != '\0')
    {
        if (ft_strchr((const char*)result, argv[1][i]) == NULL)
            result[j++] = argv[1][i];
        i++;
    }
    i = 0;
    while (argv[2][i] != '\0')
    {
        if (ft_strchr((const char *)result, argv[2][i]) == NULL)
            result[j++] = argv[2][i];
        i++;
    }
    result[j] == '\0';
    j = 0;
    while (result[j] != '\0')
        write(1, &(result[j++]), 1);
    write(1, "\n", 1);    
}