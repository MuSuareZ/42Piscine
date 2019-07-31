/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 19:54:24 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/12 19:54:26 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int fat;

	fat = 1;
	i = 1;
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		fat = fat * i;
		i = i + 1;
	}
	if (fat >= 1)
	{
		printf("%d", fat);
		return (fat);
	}
	return (0);
}
