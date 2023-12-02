/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfararan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:40:46 by nfararan          #+#    #+#             */
/*   Updated: 2023/12/02 00:46:14 by nfararan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	ft_print_line(int i, int j, int x, int y)
{
	if ((i != 1 && i != x) && (j != 1 && j != y))
		ft_putchar(' ');
	else if ((i == 1 && j == 1) || (i == x && j == y))
		ft_putchar('A');
	else if ((i == 1 && j == y) || (i == x && j == 1))
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			ft_print_line(i, j, x, y);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
