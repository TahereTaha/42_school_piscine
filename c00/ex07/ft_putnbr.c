/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taha <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:30:01 by taha              #+#    #+#             */
/*   Updated: 2024/04/19 18:51:51 by taha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr == 0)
		write(1, "0", 1);
	if (nbr == 0)
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	nbr = nbr * (((nbr >= 0) * 2) - 1);
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10);
	write(1, &(char){(nbr % 10) + '0'}, 1);
}
/*
int	main(void)
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(832);
	write(1, "\n", 1);
	ft_putnbr(1000);
	write(1, "\n", 1);
	ft_putnbr(-3274);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	return (0);
}
*/
