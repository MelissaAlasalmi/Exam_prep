#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	str_capitaliser(char *argv)
{   
	while (*argv != '\0')
	{
		while (*argv == ' ' || *argv == '\t')
        {
			ft_putchar(*argv);
            *argv++;
        }
		if (*argv >= 'a' && *argv <= 'z' && (*argv != ' ' || *argv != '\t'))
		{
            *argv = *argv - 32;
            ft_putchar(*argv);
        }
        else
        {
            ft_putchar(*argv);
            *argv++;
        }
		while (*argv && (*argv != ' ' || *argv != '\t'))
		{
            if (*argv >= 'A' && *argv <= 'Z')
            {
                *argv = *argv + 32;
                ft_putchar(*argv);
            }
            else 
                ft_putchar(*argv);
            *argv++;
        }
        *argv++;
	}
}

int		main(int argc, char **argv)
{
    int i;

    i = 1;

	if (argc > 1)
	{
		while (argv[i] != 0)
		{
			str_capitaliser(argv[i]);
			i++;
		}
    write(1, "\n", 1);
	}
	return (0);
}