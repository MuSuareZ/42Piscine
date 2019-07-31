/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:35:58 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/17 14:35:59 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*string;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	i = i + 1;
	string = malloc(i * sizeof(char));
	string = src;
	return (string);
}
