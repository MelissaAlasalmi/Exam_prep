/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 20:39:33 by malasalm          #+#    #+#             */
/*   Updated: 2019/09/05 22:07:38 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes a string and displays the string in reverse 
** followed by a new line. if the number of parameters is not one, the program 
** displays a new line. example ' abc ' becomes ' cba ' and ' abC' becomes 
** ' Cba '
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    i = 0;

    if (argc != 2)
        write(1, "\n", 1);
    else
        {
            while(argv[1][i] != '\0')
                i++;
            while(i >= 0)
            {
                write(1, &argv[1][i], 1);
                i--;
            }
            write(1, "\n", 1);
        }
    return(0);
}