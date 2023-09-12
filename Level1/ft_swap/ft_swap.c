void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/*int main(int argc, char **argv)
{
    int a = 100;
    int b = 500;

    ft_swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
    return (0);
}
*/