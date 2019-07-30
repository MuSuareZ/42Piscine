#include <unistd.h>
#include <stdio.h>

void	ft_rot(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			str[i] = str[i] + 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] = str[i] - 13;
		else if (str[i] >= 'A' && str[i] <= 'M')
			str[i]  = str[i] + 13;
		else if (str[i] >= 'N' && str[i] <= 'Z')
			str[i] = str[i] - 13;
		else
			write(1, "Error\n", 6);
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char str[] = "LARANZINZAYELTERRONWILLMEETELUNDEFINED";
	ft_rot(str);
}
