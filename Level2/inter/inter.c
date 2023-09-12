#include <unistd.h>
#include <stdlib.h>

size_t  ft_strlen(char *str)
{
    int length = 0;
    while (*str++)
        length++;
    return (length);
}

int contains(char *str, char c)
{
    while(*str)
        if (*str++ == c)
            return (0);
    return (1);
}

void main(int argc, char **argv)
{
    char    *memo = (char *)malloc(1000*sizeof(char));
    int c = 0;
    int i = 0;
    int j = 0;
    while (argv[1][i] != '\0')
    {
        while (argv[2][j] != '\0')
            if (argv[1][i] == argv[2][j++] && contains(memo, argv[1][i]) == 1)
                    memo[c++] = argv[1][i];
        j = 0;     
        i++;
    }
    memo[c] = '\0';
    printf("%s\n", memo);
    free(memo);
}