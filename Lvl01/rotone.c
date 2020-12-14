/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:34:26 by malasalm          #+#    #+#             */
/*   Updated: 2020/01/07 12:34:32 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Write a program that takes a string and displays it, replacing each of its
** letters by the next one in alphabetical order.
** 'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.
** The output will be followed by a \n.
** If the number of arguments is not 1, the program displays \n.
*/

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
