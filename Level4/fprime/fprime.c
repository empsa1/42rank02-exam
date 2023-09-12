#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n;
    int divider;
    int limit;

    divider = 2;
    if (argc == 2)
    {
        n = atoi(argv[1]);
        limit = n / 2;
        while (n > 1 && divider <= limit)
        {
            if (n % divider == 0)
            {
                printf("%d", divider);
                n = n / divider;
                if (n > 1)
                    printf("*");
            }
            else
            {
                divider++;
            }
        }
    }
    printf("\n");
}