/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 20:43:40 by malasalm          #+#    #+#             */
/*   Updated: 2019/09/05 15:34:42 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//* Write a program that takes a string and displays its first word followed by a new line. A word is a section of string delimited by spaces/tabs or by the start/end of the string. If the number of parameters is not one, or if there are no words, display a new line *//

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{

	int i;
	i = 0;
	
	if (argc == 2)
		{
			while ((argv[1][i] > 8 && argv[1][i] < 14) || argv[1][i] == 32)
				i++;
			while (argv[1][i])
			{
				if ((argv[1][i] > 8 && argv[1][i] < 14) || argv[1][i] == 32)
					break;
				ft_putchar(argv[1][i]);
				i++;
			}
		}
	ft_putchar('\n');
	return (0);
}
