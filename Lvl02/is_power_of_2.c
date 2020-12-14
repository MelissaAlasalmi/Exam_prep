/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 13:39:51 by Melissa           #+#    #+#             */
/*   Updated: 2020/04/22 15:12:00 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 1 || n == 2)
		return (1);
	if (n <= 0)
		return (0);
	while (n % 2 != 1 && n > 2)
		n = n / 2;
	if (n % 2 == 1)
		return (0);
	else 
		return (1);
}

int main(void)
{
	unsigned int num;
	num = 2;
	
	printf("is power of 2? %d\n", is_power_of_2(num));
	return (0);
}
