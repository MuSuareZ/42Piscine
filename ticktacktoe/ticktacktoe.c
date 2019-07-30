/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ticktacktoe.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 14:58:01 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/28 14:58:03 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	drawMap(void)
{
	system("clear");
	int c;
	int d;
	int board[3][3];

	c = 0;
	printf("#############################\n");
	printf("THIS IS A MAP FOR ORIENTATION\n");
	while (c < 3)
	{
		d = 0;
		while (d < 3)
		{
			printf("%d,%d", c, d);
			if(d != 2)
				printf(" ");
			d++;
		}
		printf("\n");
		c++;
	}
	printf("#############################\n");
}

void	drawBoard(char board[3][3], int x, int y)
{
	if (board[x][y] == 'X')
		board[x][y] = 'X';
	else if (board[x][y] == 'O')
		board[x][y] = 'O';
	else
	{
		int a;
		int b;

		a = 0;
		while (a < 3)
		{
			b = 0;
			while (b < 3)
			{
				board[a][b] = '-';
				b++;
			}
			a++;
		}
	}
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			printf("%c", board[i][j]);
			if (j != 2)
				printf("  ");
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int x = 0;		// Users option for the row
	int y = 0;		// Users option for the column
	char board[3][3];	// Our board size
	int flag = 0;		// Bool to check if game is over or not
	int turn = 1;		// 1: X's Turn | 2: Y's Turn
	
	// THIS IS THE MAIN LOOP OF THE GAME
	while (flag != 1)
	{
		drawMap();
		drawBoard(board, x, y);
		// CHECK HORIZONTAL MARKS
		if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][1] != '-')
			flag = 1;
		else if (board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][1] != '-')
			flag = 1;
		else if (board[2][0] ==  board[2][1] && board[2][1] == board[2][2] && board[2][1] != '-')
			flag = 1;
		// CHECK VERTICAL MARKS
		else if (board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[1][0] != '-')
			flag = 1;
		else if (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[1][1] != '-')
			flag = 1;
		else if (board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[1][2] != '-')
			flag = 1;
		// CHECK DIAGONAL MARKS
		else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != '-')
			flag = 1;
		else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != '-')
			flag = 1;
		else if (board[0][0] != '-' && board[0][1] != '-' && board[0][2] != '-' && board[1][0] != '-'
			&& board[1][1] != '-' && board[1][2] != '-' && board[2][0] != '-' && 
			board[2][1] != '-' && board[2][2] != '-')
			break;
		else
		{
			printf("Player %d turn!\n", turn);
			printf("Please input X coordinate: ");
			scanf("%d", &x);
			printf("Please input Y coordinate: ");
			scanf("%d", &y);
			if (turn == 1 && board[x][y] == '-')
			{
				board[x][y] = 'X';
			 	turn++;
			}
			else if (turn == 2 && board[x][y] == '-')
			{
				board[x][y] = 'O';
				turn--;
			}
			else
			{
				printf("Invalid input!\n");
				sleep(3);
			}
		}
	}
	if (flag == 1)
	{
		if (turn == 2)
			turn--;
		else
			turn++;
		printf("Player %d wins!\n\n", turn);
	}
	else
		printf("It's a draw!\n");
	return (0);
}
