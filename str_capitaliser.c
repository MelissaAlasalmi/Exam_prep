#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	str_capitaliser(char *argv)
{   
    int i;
    char c;

    i = 0;
	while (argv[i] != '\0')
	{
		while (argv[i] == ' ' || argv[i] == '\t')
        {
			ft_putchar(argv[i]);
            i++;
        }
		if (argv[i] && (argv[i] != ' ' || argv[i] != '\t'))
		{
            c = argv[i];
            if (c >= 'a' && c <= 'z')
            {
                c = c - 32;
                ft_putchar(c);
            }
            else 
                ft_putchar(c);
            i++;
        }
		while (argv[i] && (argv[i] != ' ' || argv[i] != '\t'))
		{
            c = argv[i];
            if (c >= 'A' && c <= 'Z')
            {
                c = c + 32;
                ft_putchar(c);
            }
            else 
                ft_putchar(c);
            i++;
        }
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