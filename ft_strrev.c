/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:22:57 by malasalm          #+#    #+#             */
/*   Updated: 2020/01/07 12:23:43 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Write a function that reverses (in-place) a string.
** It must return its parameter.
** Your function must be declared as follows:
** char    *ft_strrev(char *str);
*/

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    int len;
    char c;

    i = 0;
    len = 0;
    while (str[i] != '\0')
        i++;
    len = i;
    i = 0;
    printf("len:%d\n", len);
    while (i < len)
    {
        c = str[i];
        str[i] = str[len];
        str[len] = c;
        i++;
        len--;
    }
    str[i] = '\0';
    return (str);
}

int main(void)
{
    char *str = "Hello";

    printf("\n%s\n", ft_strrev(str));
    return (0);
}