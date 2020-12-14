/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 14:07:56 by exam              #+#    #+#             */
/*   Updated: 2020/01/07 14:27:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i;
	int max;

	i = 0;
	max = 0;
	while (i < (int)len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	main(void)
{
	int tab[] = {21, 43, 4 ,24, 65, 34};
	int len;

	len = 6;
	printf("%d\n", max(tab, len));
	return (0);
}