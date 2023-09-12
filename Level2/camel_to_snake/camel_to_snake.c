#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int is_caps(char c)
{
    if (c >= 65 && c <= 90)
        return (0);
    return (1);
}

char    lower_case(char c)
{
    return (c + ' ');
}

char*    camel_to_snake(char *lowerCamelCase)
{
    int size;
    char *snake_case;
    int i;
    int j;

    i = 0;
    j = 0; 
    size = ft_strlen(lowerCamelCase);
    snake_case = (char *)malloc(100 * ft_strlen(lowerCamelCase));
    if (is_caps(lowerCamelCase[i]) == 0)
        snake_case[i++] = lower_case(lowerCamelCase[j++]);
    while (lowerCamelCase[j] != '\0')
    {
        if (is_caps(lowerCamelCase[j + 1]) == 0)
        {
            snake_case[i++] = lowerCamelCase[j++];
            snake_case[i++] = '_';
        }
        else
            snake_case[i++] = lowerCamelCase[j++];
    }
    snake_case[i] = '\0';
    j = 0;
    while(snake_case[j++] != '\0')
        if (is_caps(snake_case[j]) == 0)
            snake_case[j] = lower_case(snake_case[j]);
    return (snake_case);
}

void    main(int argc, char **argv)
{
    int i;
    char *p;

    i = 0;
    if (argc == 2)
    {
        p = camel_to_snake(argv[1]);
        while (p[i] != '\0')
            write(1, &(p[i++]), 1);
        free(p);
    }
    write(1, "\n", 1);
}