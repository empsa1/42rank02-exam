#include <unistd.h>
#include <stdio.h>

size_t  ft_strlen(char *str)
{
    size_t length;

    length = 0;
    while (*str++ != '\0')
        length++;
    return (length);
}

int ft_match(char c, char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        if (str[i++] == c)
            return (--i);
    return (-1);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int matches;
    int size;
    int temp;

    temp = 0;
    matches = 0;
    size = ft_strlen(argv[1]);
    i = 0;
    j = 0;
    while (argv[1][i] != '\0' && argv[2][j] != '\0')
    {
        temp = ft_match(argv[1][i], &(argv[2][j]));
        if (temp >= 0)
            matches++;
        j = temp;
        i++;
    }
    i = 0;
    if (matches == size)
    {
        write(1,"1\n", 2);
        return (1);
    }
    write(1, "0\n", 2);
    return (0);
}