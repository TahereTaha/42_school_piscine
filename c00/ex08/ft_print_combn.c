/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taha <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:55:53 by taha              #+#    #+#             */
/*   Updated: 2024/04/19 23:50:35 by taha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb_recursive(char *nb, int start, int end)
{
	int	flore;
	int	celing;

	if (start == end)
	{
		write(1, nb, end);
		if (*nb - '0' != (10 - end))
			write(1, ", ", 2);
		return ;
	}
	if (start == 0)
		flore = 0;
	else
		flore = (nb[start - 1] - '0') + 1;
	celing = 10 - end + start;
	while (flore <= celing)
	{
		nb[start] = (char)(flore + '0');
		print_comb_recursive(nb, start + 1, end);
		flore++;
	}
}

void	ft_print_combn(int n)
{
	char	buf[11];

	print_comb_recursive(buf, 0, n);
}
/*
int	main(void)
{
	ft_print_combn(4);
	return (0);
}
*/
