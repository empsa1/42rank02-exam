#include <unistd.h>

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
    result[0] = end;
    if (end > start)
    {
        while (end > start)
            result[i++] = --end;
        return (result);
    }
    while (start > end)
        result[i++] = --start;
    return (result);
}