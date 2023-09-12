#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
    int tester;

    tester = 1;
    while (tester <= n)
    {
        tester = tester * 2;
        if (tester == n)
            return (1);
    }
    return (0);
}