/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 10:00:16 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/15 10:00:18 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(int i, int result)
{
	if (i == 1)
	{
		return (-result);
	}
	else
	{
		return (result);
	}
}

int	ft_atoi(char *str)
{
	int result;
	int i;
	int flag;

	i = 0;
	result = 0;
	flag = 0;
	while (str[i] == '\v' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i] == '\f' || str[i] == '\r' || str[i] == ' ' || str[i] == '+')
	{
		i++;
	}
	if (str[i] == '-')
	{
		flag = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (check(flag, result));
}
