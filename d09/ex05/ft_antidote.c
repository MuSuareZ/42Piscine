/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:42:37 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/18 21:42:39 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if ((i < j && j < k) || (k < j && j < i))
		return (j);
	else if ((j < i && i < k) || (k < i && i < j))
		return (i);
	else
		return (k);
}
