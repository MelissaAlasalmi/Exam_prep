#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rotone(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'y')
            ft_putchar(str[i] + 1);
        else if (str[i] >= 'A' && str[i] <= 'y')
            ft_putchar(str[i] + 1);
        else if (str[i] == 'z' || str[i] == 'Z')
            ft_putchar(str[i] - 25);
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        rotone(argv[1]);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    return(0);
}