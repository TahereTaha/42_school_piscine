/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taha <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:12:49 by taha              #+#    #+#             */
/*   Updated: 2024/04/19 18:27:52 by taha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			write(1, &(char){(nb1 / 10) + '0'}, 1);
			write(1, &(char){(nb1 % 10) + '0'}, 1);
			write(1, " ", 1);
			write(1, &(char){(nb2 / 10) + '0'}, 1);
			write(1, &(char){(nb2 % 10) + '0'}, 1);
			if (nb1 != 98)
				write(1, ", ", 2);
			nb2++;
		}
		nb1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
