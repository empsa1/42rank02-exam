#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j = 0;
    int flag = 0;
    while (s[i])
    {
        while (accept[j])
        {
            if (s[i] == accept[j++])
                flag++;
        }
        if (flag == 0)
            return (i);
        j = 0;
        flag = 0;
        i++;
    }
    return (i);
}