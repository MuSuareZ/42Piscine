/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 02:49:00 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/19 02:49:01 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp2;

	temp2 = *******c;
	*******c = ***a;
	***a = *b;
	*b = ****d;
	****d = temp2;
}
