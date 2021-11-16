/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:04:52 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/08 15:02:26 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || \
			c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sym;
	int	mul;
	int	num;

	i = 0;
	sym = 0;
	mul = 1;
	num = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mul *= -1;
		if (sym++ > 0)
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += ((int)str[i++] - '0');
	}
	return (num * mul);
}
/*
int main()
{
	printf(YELLOW("ft_atoi test\n"));
	printf(YELLOW("test1: "));
	printf(RED("\\t\\v\\f' '' '+234234234\n"));
	printf(YELLOW("function call: "));
	printf(WHITE("%d\n"), ft_atoi("\t\v\f  +234234234"));
	printf(RED("------------------------------\n"));
	printf(YELLOW("test2: "));
	printf(RED("lkfjsldkf34234234\n"));
	printf(YELLOW("function call: "));
	printf(WHITE("%d\n"), ft_atoi("lkfjsldkf34234234"));
	printf(RED("------------------------------\n"));
	printf(YELLOW("test3: "));
	printf(RED("2147483648\n"));
	printf(YELLOW("function call: "));
	printf(WHITE("%d\n"), ft_atoi("2147483648"));
	printf(RED("------------------------------\n"));
	printf(YELLOW("test4: "));
	printf(RED("-2147483649\n"));
	printf(YELLOW("function call: "));
	printf(WHITE("%d\n"), ft_atoi("-2147483649"));
	printf(RED("------------------------------\n"));
	printf(YELLOW("test5: "));
	printf(RED("-\\t\\r\\f214748364\n"));
	printf(YELLOW("function call: "));
	printf(WHITE("%d\n"), ft_atoi("-\t\r\f214748364"));
}
*/
