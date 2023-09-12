#include <unistd.h>

int first_word(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i] == 32 || argv[1][i] == 9)
            i++;
        while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}

/*int main(int argc, char **argv)
    {
        if (argc <= 1)
        {
            argument_error(1);
            return (1);
        }
        first_word(argv);
        return (0);
    }
*/
