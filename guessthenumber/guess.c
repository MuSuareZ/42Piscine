/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   guess.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:12:45 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/25 17:12:46 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define DEBUG 0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void	intro(void)
{
	printf("---------------------------------------------------\n");
	printf("Welcome to the 'Guess the Number' game!\n");
	printf("A random number from 1 to 100 will be sorted out\n");
	printf("Your task will be to guess which number is it\n");
	printf("But remember, you only have 5 chances!\n");
	printf("Good luck ;)\n");
	printf("by: msuarez-\n");
}

void	separator(void)
{
	printf("---------------------------------------------------\n");
}

int	main(void)
{
	int randomNumber;
	int userNumber;
	int chances;
	srand((unsigned) time(NULL));

	randomNumber = (rand() % 100) + 1;
	chances = 5;
	userNumber = 0;
	intro();
	if (DEBUG == 1)
	{
		separator();
		printf("DEBUG ACTIVATED! ANSWER: %d\n", randomNumber);
	}
	while (chances != 0)
	{
		separator();
		printf("You have %d chances left!\n", chances);
		printf("Please input your number (1-100): ");
		scanf("%d", &userNumber);

		if (userNumber <= 0 || userNumber > 100 || (isdigit(userNumber) == 0))
		{
			printf("Wrong input! Please input a number from 1 to 100!\n");
		}
		else
		{
			if (userNumber == randomNumber)
			{
				separator();
				printf("You guessed the right number! Congratulations!\n");
				printf("Thanks for playing! Made by: msuarez-\n");
				separator();
				break;
			}
			else if (userNumber > randomNumber)
			{
				printf("You tried a number BIGGER than the correct answer!\n");
				chances--;
			}
			else if (userNumber < randomNumber)
			{
				printf("You tried a number SMALLER than the correct answer!\n");
				chances--;
			}
			else
				continue;
		}
	}
	if (chances == 0)
	{
		separator();
		printf("Oh no! You ran out of chances! Good luck next time :)\n");
		printf("The right answer was: %d\n", randomNumber);
		printf("Thanks for playing! Made by: msuarez-\n");
		separator();
	}
	return (0);
}
