/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hangman.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 14:28:17 by msuarez-          #+#    #+#             */
/*   Updated: 2019/08/01 19:36:30 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while ((s1[i] || s2[i]) && res == 0)
	{
		if (s1[i] != s2[i])
			res = s1[i] - s2[i];
		i++;
	}
	return (res);
}

int check_letter(char *word, char c, char *guess)
{
	int i;

	i = 0;
	while (word[i] != '\0')
	{
		if (word[i] == c && guess[i] == '*')
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

void draw_hangman(int chances)
{
        system("clear");
		switch(chances)
		{
			case 5:
				printf("+----\n|    \n|    \n|    \n|    \n|    \n");
				break;
			case 4:
				printf("+----\n|   O\n|    \n|    \n|    \n|    \n");
				break;
			case 3:
				printf("+----\n|   O\n|   +\n|   |\n|    \n|    \n");
				break;
			case 2:
				printf("+----\n|   O\n| --+--\n|   |\n|    \n|    \n");
				break;
			case 1:
				printf("+----\n|   O\n| --+--\n|   |\n|  / \\\n|     \n");
				break;
			default:
				system("clear");
				printf("+----\n|   0\n| --+--\n|   |\n|  / \\\n|     \n");
				printf("You DIIIIED!!! AHAHAHAHAHAH!!\n");
				printf("Good luck next time... IN HELL! :)\n\n");
				break;
		}
}

void	printStars(char *guess, char *word)
{
	int len = ft_strlen(word);
	int counter = 0;
	while (counter < len)
	{
		printf("  %c  ", guess[counter]);
		counter++;
	}
}

void	printTried(char *tried)
{
	int i;

	i = 0;
	while (tried[i] != '\0')
	{
		printf(" %c ", tried[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Please input the word to be guessed after the program's name :)\n");
		return (0);
	}
	int len = ft_strlen(av[1]);
	int chances;
	int counter = 0;
	int i;
	int j = 0;
	int end;
	char letter;
	char guess[len];
	char *word;
	char tried[26];

	end = len;
	word = av[1];
	while (counter <= len)
	{
		guess[counter] = '*';
		counter++;
	}
	chances = 5;
	while (1)
	{
		draw_hangman(chances);
		printStars(guess, word);
		printf("\n");
		printf("Tried letters:");
		printTried(tried);
		printf("\n\n");
		if (chances == 0)
		{
			printf("The answer was: %s\n", word);
			break;
		}
		if (end == 0)
		{
			printf("You live to die another day!!!!\n");
			break;
		}
		printf("Input your letter: ");
		scanf(" %c", &letter);
		i = check_letter(word, letter, guess);
		if (i >= 0)
		{
			printf("Correct guess!\n");
			guess[i] = word[i];
			while ((i = check_letter(word, letter, guess)) > 0)
			{
					guess[i] = word[i];
					end--;
			}
			end--;
			sleep(1);
		}
		else
		{
			printf("Wrong guess!\n");
			sleep(1);
			tried[j] = letter;
			chances--;
			j++;
		}
	}
	return (0);
}
