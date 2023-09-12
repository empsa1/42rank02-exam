#include <unistd.h>
#include <stdlib.h>

int ft_abs(int start, int end)
{
    if (start > end)
        return (start - end);
    return (end - start);
}

int     *ft_range(int start, int end)
{
    if (start == end)
        return (NULL);
    int i = 1;
    int *result = (int *)malloc((ft_abs(start, end))*sizeof(int));
    result[0] = start;
    if (end > start)
    {
        while (start > end)
            result[i++] = --start;
        return (result);
    }
    while (i < end)
        result[i++] = ++start;
    return (result);
}