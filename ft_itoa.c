/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:53:58 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/12 15:05:16 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nblen(long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_nbdig(long long n)
{
	int	count;

	count = 1;
	while (--n)
		count *= 10;
	return (count);
}

char	*ft_itoa(int n)
{
	char		*num;
	int			nlen;
	int			i;
	int			sign;
	long long	ln;

	sign = 0;
	i = 0;
	ln = (long long)n;
	nlen = ft_nblen(ln);
	num = malloc(nlen + 2);
	if (!(num))
		return (NULL);
	if (ln < 0)
	{
		ln *= -1;
		num[0] = '-';
		sign = 1;
	}
	while (nlen)
		num[i++ + sign] = ((ln / ft_nbdig(nlen--)) % 10) + '0';
	num[i + sign] = '\0';
	return (num);
}
/*
   int main()
   {
   char *test = ft_itoa(9999999);
   printf(WHITE("%s\n"), test);
   free(test);
   test = ft_itoa(-9);
   printf(WHITE("%s\n"), test);
   free(test);
   test = ft_itoa(8124);
   printf(WHITE("%s\n"), test);
   free(test);
   test = ft_itoa(-9874);
   printf(WHITE("%s\n"), test);
   free(test);
   test = ft_itoa(2147483647);
   printf(WHITE("%s\n"), test);
   test = ft_itoa(543000);
   printf(WHITE("%s\n"), test);
   free(test);
   test = ft_itoa(-2147483648LL);
   printf(WHITE("%s\n"), test);
   test = ft_itoa(0);
   printf(WHITE("%s\n"), test);
   }
   */
