#include <unistd.h>

int	ft_atoi(const char *str)
{
    int i;
    int result;
    int flag;

    i = 0;
    result = 0;
    flag = 1;
    if (str[i] == '-')
    {
        flag*(-1);
        i++;
    }
    while (str[i++] != '\0')
    {
        result = result * 10 + *str - '0';
    }
    return (result * flag);
}