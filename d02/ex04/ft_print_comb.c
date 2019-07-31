/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:34:36 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/10 11:34:37 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c);

void	ft_print_comb(void)
{
	char vars[3];

	vars[0] = '0';
	while (vars[0] <= '7')
	{
		vars[1] = vars[0] + 1;
		while (vars[2] <= '9')
		{
			vars[2] = vars[1] + 1;
			while (vars[2] <= '9')
			{
				ft_putchar(vars[0]);
				ft_putchar(vars[1]);
				ft_putchar(vars[2]);
				if (vars[0] < '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				vars[2]++;
			}
			vars[1]++;
		}
		vars[0]++;
	}
}
