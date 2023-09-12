#include <unistd.h>

void main(int argc, char **argv)
{
    int i = 0;
    int lastspace = 0;
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] == ' ')
            lastspace = i + 1;
        i++;
    }
    while(argv[1][lastspace] != '\0')
        write(1, &(argv[1][lastspace++]), 1);
    write(1, "\n", 1);
}