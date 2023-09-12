#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n1;
    int n2;
    int deno;

    if (argc == 3)
    {
        n1 = atoi(argv[1]);
        n2 = atoi(argv[2]);
        if (n1 <= 0 || n2 <= 0)
        {
            printf("\n");
            return (0);
        }
        if (n1 > n2)
            deno = n1/2;
        else
            deno = n2/2;
        while (deno >= 2)
        {
            if (n1 % deno == 0 && n2 % deno == 0)
                {
                    printf("%d\n", deno);
                    return (deno);
                }
            deno--;
        }
    }
    printf("\n");
}