/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:15:59 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/17 13:16:01 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	const char	*k = argv[0];
	int			i;

	i = 0;
	if (argc)
	{
		while (k[i] != '\0')
		{
			ft_putchar(k[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
