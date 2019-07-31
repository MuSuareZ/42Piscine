/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perseesta.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:16:12 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/23 11:16:13 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);

int	main(void)
{
	t_list *boobs = ft_create_elem("vittu!");
	t_list *item = ft_create_elem("you perseesta!");
	printf("%s\n", (char*)boobs->item);
	printf("%s\n", (char*)item->data);
	printf("%p\n", item->next);
	return (0);
}
