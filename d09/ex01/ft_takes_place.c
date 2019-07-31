/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:43:36 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/18 17:43:39 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	check(int hour)
{
	int y;

	if (hour == 11)
	{
		y = hour + 1;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 P.M.\n",
		 11, y);
	}
	if (hour == 23)
	{
		y = 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 A.M.\n",
		 23, y);
	}
}

void	ft_takes_place(int hour)
{
	int y;
	check(hour);

	if (hour == 0)
	{
		hour = 12;
		y = 1;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n",
		 hour, y);
	}
	else if (hour == 12)
	{
		y = 1;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n",
		 hour , y);
	}
	else if (hour >= 1 && hour <= 10)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n",
		 hour, hour+1);
	}
	else if (hour >= 13 && hour <= 22)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n",
		 hour-12, hour-11);
	}
}
