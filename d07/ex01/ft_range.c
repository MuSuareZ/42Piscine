/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:17:12 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/18 14:17:16 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int i;
	int *range;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	i = min;
	range = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[min - i] = min;
		min++;
	}
	return (range);
}

int	main(void)
{
	printf("%d", *ft_range(5,10));
	return (0);
}
