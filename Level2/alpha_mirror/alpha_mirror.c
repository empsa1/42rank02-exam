#include <unistd.h>

void    alpha_mirror(char c)
{
    if (c == 'M' || c == 'm')
        c++;
    else if (c == 'N' || c == 'n')
        c--;
    else if (c < 'M' && c >= 'A')
        c = 'Z' - (c - 'A');
    else if (c < 'm' && c >= 'a')
        c = 'z' - (c - 'a');
    else if (c > 'N' && c <= 'Z')
        c = 'A' + ('Z' - c);
    else
        c = 'a' + ('z' - c);
    write(1, &c, 1);
}

void main(int argc, char **argv)
{
    int i;
    int j;

    j = 0;
    i = 0;
    if (argc == 2)
    {
        while (argv[++i])
        {
            while (argv[i][j])
            {
                if ((argv[i][j] >= 65 && argv[i][j] <= 90) || (argv[i][j] >= 97 && argv[i][j] <= 122))
                    alpha_mirror(argv[i][j++]);
                else
                    write(1, &(argv[i][j++]), 1);
            }
        }
    }
    write(1, "\n", 1);
}
