#include <unistd.h>
#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    int LCM;

    LCM = 2;
    if (a <= 0 || b <= 0)
        return (0);
    while (LCM <= a/2 && LCM <= b/2)
        if (a % LCM == 0 && b % LCM++ == 0)
            return (--LCM);
    return (LCM);
}