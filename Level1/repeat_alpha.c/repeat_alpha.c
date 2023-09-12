#include <unistd.h>

void    repeat_alpha(char *s)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(s[i] != '\0')
    {
        while (j++ <= i)
            write(1, &(s[i]), 1);
        j = 0;
        i++;
    }
    write(1, "\n", 1);
}

/*int main(int argc, char **argv)
{
    repeat_alpha("abc");
    return (0);
}
*/