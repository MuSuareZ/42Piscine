/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:41:43 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/15 13:41:45 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int tmp;

	tmp = 0;
	while (tmp < n)
	{
		dest[tmp] = src[tmp];
		tmp++;
	}
	return (dest);
}
