/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 23:57:35 by malasalm          #+#    #+#             */
/*   Updated: 2019/09/06 00:17:56 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Write a program called repeat_alpha that takes a string and display it
** repeating each alphabetical character as many times as its alphabetical index,
** followed by a newline. 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...
** Case remains unchanged. If the number of arguments is not 1, just display a newline.
*/

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 65;
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 97;
			while (j >=0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	else
	{
	write(1, "\n", 1);
	}
	return (0);
}
