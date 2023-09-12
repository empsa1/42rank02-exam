#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    
    i = 0;
    if (argc == 4 &&!argv[2][1] && !argv[3][1])
        while (argv[1][i])
        {
            if (argv[1][i] == argv[2][0])
                argv[1][i] = argv[3][0];
            i++;
        }
    else
        write(1, "\n", 1);
    return (0);
}