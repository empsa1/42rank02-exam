#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int length = 0;
    while (*str++)
        length++;
    return (length);
}

int	ft_isalpha(int argument)
{
	if (argument >= 65 && argument <= 90) //ASCII TABLE (uppercase)
		return(1);
	if (argument >= 97 && argument <= 122) //ASCII TABLE (lowercase)
		return(2);
	return(0);
}

void main(int argc, char **argv)
{
    int i = 1;
    int j = 0;
    int size;
    while (argv[i] != NULL)
    {
        size = ft_strlen(argv[i]);
        while (j < size - 1)
            {
                if (ft_isalpha(argv[i][j]) == 1)
                {
                    argv[i][j] = argv[i][j] + ' ';
                    write(1, &(argv[i][j]), 1);
                }
                else
                    write(1, &(argv[i][j]), 1);
                j++;
            }
            if (ft_isalpha(argv[i][j]) == 2)
                argv[i][j] = argv[i][j] - ' ';
            write(1, &(argv[i][j]), 1);
            write(1, " ", 1);
            j = 0;
            i++;
    }
    write(1,"\n", 1);
}