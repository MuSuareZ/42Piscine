/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:01:37 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/16 11:01:38 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while ((s1[i] || s2[i]) && result == 0)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
		}
		i++;
	}
	return (result);
}
