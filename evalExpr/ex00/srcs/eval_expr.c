/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:14:39 by msuarez-          #+#    #+#             */
/*   Updated: 2019/07/28 09:14:40 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include "ft_function.h"

int		check_number(char **str)
{
	int num;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		num = check_sum(str);
		if (**str == ')')
			(*str)++;
		return (num);
	}
	return (ft_atoi(str));
}

int		check_factors(char **str)
{
	int		num;
	int		num2;
	char	op;

	num = check_number(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '/' && op != '*' && op != '%')
			return (num);
		(*str)++;
		num2 = check_number(str);
		if (op == '/')
			num /= num2;
		else if (op == '*')
			num *= num2;
		else
			num %= num2;
	}
	return (num);
}

int		check_sum(char **str)
{
	int		num;
	int		num2;
	char	op;

	num = check_factors(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '+' && op != '-')
			return (num);
		(*str)++;
		num2 = check_factors(str);
		if (op == '+')
			num += num2;
		else
			num -= num2;
	}
	return (num);
}

int		eval_expr(char *str)
{
	return (check_sum(&str));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
