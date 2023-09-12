#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int result;
    
    result = 0;
    int flag = 1;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            flag = -1;
        str++;
    }
    while (*str)
        result = result * 10 + *str++ - '0';
    printf("Result of atoi: %d\n", result);
    return (result * flag);
}

void
	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = (nb % 1000000000 * -1);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = (nb * -1);
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int main(int argc, char **argv)
{
    int n;
    int i;
    char table[10] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9'};
    i = 1;
    n = ft_atoi(argv[1]);
    while (i <= 9)
    {
        write(1, &(table[i]), 1);
        write(1, " x ", 3);
        ft_putnbr(n);
        write(1, " = ", 3);
        ft_putnbr(n * i);
        i++;
        write(1, "\n", 1);
    }
}