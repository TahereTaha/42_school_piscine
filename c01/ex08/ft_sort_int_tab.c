/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taha <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:20:38 by taha              #+#    #+#             */
/*   Updated: 2024/04/20 13:31:22 by taha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				swp = tab[i];
				tab[i] = tab[j];
				tab[j] = swp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int tab[5];
	int i;

	tab[0] = 5;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 1;
	tab[4] = 4;
	i = 0;
	while (i < 5)
		printf("%d, ", tab[i++]);
	printf("\n");
	ft_sort_int_tab(tab, 5);
	i = 0;
	while (i < 5)
		printf("%d, ", tab[i++]);
	printf("\n");
	return (0);
}
*/
