#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char    *inv_str(char *str, int i)
{
    int j = 0;
    char *result = malloc(i * sizeof(int));
    while (i >= 0)
    {
        result[j++] = str[i--];
    }
    free(str);
    result[j] = '\0';
    return (result);
}

int intlen(int nbr)
{
    int counter;
    while (nbr > 1)
    {
        nbr = nbr / 10;
        counter++;
    }
    return (counter);
}

char	*ft_itoa(int nbr)
{
    int i = 0;
    char *result = malloc(intlen(nbr) * sizeof(int) + 1);
    while (nbr >= 1)
    {
        result[i++] = (nbr % 10) + '0';
        nbr = nbr / 10;
    }
    result[i] = '\0';
    return (inv_str(result, --i));
}