#include <unistd.h>

char    singler(int n)
{
    if (n < 10)
        return (n + '0');
    return (singler(n % 10));
}

void    number_printer(int n)
{
    char str[13];
    int i = 0;
    while (n >= 1)
    {
        str[i++] = singler(n);
        n = n / 10;
    }
    while (i >= 0)
        write(1, &(str[--i]), 1);
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        number_printer(argc-1);
        write(1, "\n", 1);
        return (argc);
    }
    write(1, "0\n", 2);
    return (0);
}