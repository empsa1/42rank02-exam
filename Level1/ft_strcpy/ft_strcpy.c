#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while (s2[i] != '\0')
        s1[i] = s2[i++];
    s1[i] = '\0';
    return (s1);
}

/*int main(int argc, char **argv)
 {
    char s1[20];
    s1[0] = 'A';
    s1[1] = 'B';
    char *s2 = "Hello my friend";
    ft_strcpy(&(s1[2]), s2);
    printf("\n%s\n", s1);
    return (0);
}
*/
