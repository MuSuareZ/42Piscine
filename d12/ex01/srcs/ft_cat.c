/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 16:40:42 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/24 16:40:43 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	terminal_input(void)
{
	char c;

	while (read(STDIN_FILENO, &c, 1))
	{
		write(1, &c, 1);
	}
}

int		display(char *filename)
{
	int		file;
	char	character;
	char	*name;

	name = &filename[0];
	file = open(filename, O_RDWR);
	if (file < 0)
	{
		write(2, "cat: ", 5);
		write(2, name, ft_strlen(name));
		if (errno == 21)
		{
			write(2, ": Is a directory\n", 17);
			return (0);
		}
		else
		{
			write(2, ": No such file or directory\n", 28);
			return (0);
		}
	}
	while (read(file, &character, 1))
		write(1, &character, 1);
	close(file);
	return (0);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			display(argv[i]);
			i++;
		}
	}
	else
		terminal_input();
	return (0);
}
