/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 00:45:35 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/19 00:45:36 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*lowc(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		cmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[j] == ' ')
	{
		j++;
	}
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[i])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

int	main(int argc, char **argv)
{
	int alert;
	int i;

	alert = 0;
	i = 0;
	while (i < argc)
	{
		lowc(argv[i]);
		if (cmp("president", argv[i]) == 0)
			alert = 1;
		if (cmp("attack", argv[i]) == 0)
			alert = 1;
		if (cmp("bauer", argv[i]) == 0)
			alert = 1;
		i++;
	}
	if (alert == 1)
		write(1, "Alert!!!\n", 9);
	return (0);
}
