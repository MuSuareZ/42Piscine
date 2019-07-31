/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:42:59 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/18 20:43:01 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ROT 42

char	*ft_rot42(char *str)
{
	int i;
	int mod;

	i = 0;
	mod = 42 % 26;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] + mod > 'z')
			{
				str[i] = str[i] + mod - 26;
			}
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] + mod > 'Z')
			{
				str[i] = str[i] + mod - 26;
			}
		}
		i++;
	}
	return (str);
}
