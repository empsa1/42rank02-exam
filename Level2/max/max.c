#include <unistd.h>

int		max(int* tab, unsigned int len)
{
    int i;
    int biggest;

    i = 0;
    biggest = tab[i];
    while (i < len)
    {
        if (biggest < tab[i])
            biggest = tab[i];
        i++;
    }
    return biggest;
}