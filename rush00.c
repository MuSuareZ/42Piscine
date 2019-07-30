#include <stdio.h>

void create_row(int x)
{
	int i;

	i = 1;
	while (i < x)
	{
		if (i == 1)
		{
			printf("o");
		}
		else
		{
			printf("-");
		}
		i++;
	}
	printf("o\n");
}

void create_middle_row(int x)
{
	int j;

	j = 1;
	while (j < x)
	{
		if (j == 1)
		{
			printf("|");
		}
		else
		{
			printf(" ");
		}
		j++;
	}
	printf("|\n");
}

int	rush(int x, int y)
{
	int k;
	int tmp;

	tmp = (y - 2);
	k = 0;
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	create_row(x);
	while (k < tmp)
	{
		if (tmp < 0)
		{
			break;
		}
		create_middle_row(x);
		k++;
	}
	if (y != 1)
	{
		create_row(x);
	}
	return (0);
}

int	main(void)
{
	rush(5,3);
	return (0);
}
