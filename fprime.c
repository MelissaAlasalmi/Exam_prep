#include <stdlib.h>
#include <stdio.h>

void	fprime(int nb)
{
	int	prime;

    prime = 2;
	if (nb == 1)
		printf("1");
	else
	{
		while (nb > 1)
		{
			if (nb % prime == 0)
			{
				printf("%d", prime);
				nb = nb / prime;
				if (nb > 1)
					printf("*");
				prime--;
			}
			prime++;
		}
	}
}


int		main(int argc, char **argv)
{
	if (argc != 2)
        printf("\n");
    else
		fprime(atoi(argv[1]));
	return (0);
}