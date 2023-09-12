#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *new = (char *)malloc(1000 * sizeof(char));
    int i;
    int j;

    i = 0;
    j = 0;
    printf("%s\n", argv[1]);
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] == '_')
        {
            new[j++] = argv[1][i + 1] - ' ';
            i++;
        }
        else
            new[j++] = argv[1][i];
        i++;
    }
    printf("%s\n", new);
    free(new);
}