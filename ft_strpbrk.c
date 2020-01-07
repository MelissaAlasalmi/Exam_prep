/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 10:52:57 by malasalm          #+#    #+#             */
/*   Updated: 2020/01/07 10:54:43 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strpbrk() function locates in the null-terminated string 'str' the first
** occurrence of any character in the string 'c' and returns a pointer
** to this character.  If no characters from 'c' occur anywhere in 'str'
** strpbrk() returns NULL.
*/

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *str, const char *c)
{
	int i;
    int j;

    j = 0;
	i = 0;
    while (str[j] != '\0')
    {
        while (c[i])
        {
            if (str[j] == c[i])
                return ((char*)str + j);
            i++;
        }
        i = 0;
        j++;
    }
	return (NULL);
}

int main(void)
{
    const char *str;
    const char *c;

    str = "monsterrrr";
    c = "abcdefghijkl";
    printf("\n%s\n", strpbrk(str, c));
    printf("\n%s\n", ft_strpbrk(str, c));
    return (0);
}
