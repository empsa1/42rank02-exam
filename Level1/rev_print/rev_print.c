#include <unistd.h>

void    ft_rev_print(char *s)
{
    int i;
    
    i = 0;
    while (s[i] != '\0')
        i++;
    while (s[i] >= 0)
        write(1, &(s[i--]), 1);
}

int main()
{
    ft_rev_print("abc");
    write(1, "\n", 1);
}