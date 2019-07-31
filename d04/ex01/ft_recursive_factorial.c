/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 09:23:28 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/13 09:23:29 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 12)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	if (nb >= 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

int	main(void)
{
	printf("answer %d", ft_recursive_factorial(5));
	return (0);
}
