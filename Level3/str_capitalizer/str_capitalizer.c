#include <unistd.h>
#include <stdio.h>



int	ft_isalpha(int argument)
{
	if (argument >= 65 && argument <= 90) //ASCII TABLE (uppercase)
		return(1);
	if (argument >= 97 && argument <= 122) //ASCII TABLE (lowercase)
		return(2);
	return(0);
}

int ft_tolower(int argument)
{
    if (ft_isalpha(argument) == 2) //if return value is lowercased already
        return (argument);
    if (ft_isalpha(argument) == 1) //if return value is uppercased
        return (argument + 32);
    return (0);
}

int ft_toupper(int argument)
{
    if (ft_isalpha(argument) == 1)
        return (argument);
    if (ft_isalpha(argument) == 2)
        return (argument - 32);
    return (0);
}

void    matrix_print(char **matrix)
{
    int i = 1;
    int j = 0;
    while (matrix[i] != NULL)
    {
        while (matrix[i][j] != '\0')
        {
            write(1, &(matrix[i][j++]), 1);
        }
        j = 0;
        i++;
    }
}


void main(int argc, char **argv)
{
    int i = 1;
    int j = 1;
    while (argv[i] != NULL)
    {
        argv[i][0] = ft_toupper(argv[i][0]);
        while (argv[i][j] != '\0')
        {
            if (argv[i][j] == ' ')
            {
                while(argv[i][j] == ' ')
                    j++;
                argv[i][j] = ft_toupper(argv[i][j]);
                j++;
            }
            argv[i][j] = ft_tolower(argv[i][j]);
            j++;
        }
        j = 0;
        i++;
    }
    matrix_print(argv);
    write(1,"\n", 1);
}