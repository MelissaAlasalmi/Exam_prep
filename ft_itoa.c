#include <stdlib.h>
#include <stdio.h>

int ft_intlen(int nbr)
{
    int len;

	len = 1;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr / 10 > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
    char *str;
    int     i;

    i = ft_intlen(nbr);
    str = (char *)malloc(sizeof(char) * (i + 1));
    str[i] = '\0';
    i--;
    if (nbr == 0)
        str[0] = '0';
    if (nbr < 0)
        str[0] = '-';
    while (nbr != 0)
    {
        if (nbr < 0)
		    str[i] = '0' - (nbr % 10);
        else
            str[i] = '0' + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
    return(str);
}