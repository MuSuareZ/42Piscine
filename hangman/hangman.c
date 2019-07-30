/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hangman.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 14:28:17 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/30 19:47:22 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int check_letter(char *str, char c, int taken)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

void	draw_hangman(int chances)
{
	char *str;
		printf("---------\n");
	if (chances == 4)
		printf("|       O\n");
	else
		printf("|        \n");
	if (chances == 3)
		printf("|       /|\\\n");
	else
		printf("|        \n");
	if (chances == 2)
		printf("|     -----\n");
	else
		printf("|        \n");
	if (chances == 1)
		printf("|        \n");
	else
		printf("|        \n");
	if (chances == 0)
		printf("|       0\n");
	else
		printf("|        \n");
}

int	main(int ac, char **av)
{
	int chances;
	char word[] = "terve";
	char letter;

	chances = 5;
	while (chances != 0)
	{
		draw_hangman(chances);
		printf("Input your letter: ");
		scanf("%c", &letter);
		if (check_letter(word, letter) == 1)
		{
			printf("Correct guess!\n");
		}
		else
			printf("Wrong guess!\n");
			chances--;
	}
	return (0);
}
