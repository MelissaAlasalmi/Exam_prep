/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:26:08 by malasalm          #+#    #+#             */
/*   Updated: 2020/01/07 12:26:14 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that takes a string and displays its last word followed by a \n.
// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string. If the number of parameters is not 1, or there are no words, display 
// a newline.

#include <unistd.h>

void ft_putstr(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

void last_word(char *str)
{
    int i;
    char *newstr;

    i = 0;
    while (str[i] != '\0')
            i++;
    while (str[i] != 32)
    {
        newstr = &str[i];
        i--;
    }
    ft_putstr(newstr);
}

int main(int argc,char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
        last_word(argv[1]);
    return (0);
}
