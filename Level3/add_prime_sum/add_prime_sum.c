#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t  ft_strlen(char *str)
{
    size_t length;

    length = 0;
    while (*str++)
        length++;
    return (length);
}

int ft_atoi(char *str)
{
    int i;
    int result;

    result = 0;
    i = 0;
    while (i < (ft_strlen(str)))
        result = result * 10 + (str[i++] - '0');
    return (result);
}

int isprime(int n)
{
    int divider = n/2;
    if (n % 2 == 0)
        return (0);
    while (divider > 1)
        if (n % divider-- == 0)
            return (0);
    return (1);
}

char    singler(int n)
{
    if (n < 10)
        return (n + '0');
    return (singler(n % 10));
}

void main(int argc, char **argv)
{
    int i;
    int result;
    char str[13];
    int size;
    
    size = ft_atoi(argv[1]);
    i = 0;
    result = 0;
    if (argc != 1 || size < 0)
    {
    while (i++ < size)
        if (isprime(i) == 1)
            result = result + i;
    i = 0;
    while (result >= 1 && i < 13)
    {
        str[i++] = singler(result);
        result = result / 10;
    }
    str[i] = '\0';
    i = ft_strlen(str);
    while (i >= 0)
        write(1, &(str[i--]), 1);
    }
    write(1, "\n", 1);
}