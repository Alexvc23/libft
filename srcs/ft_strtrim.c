/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:47:02 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/15 13:48:32 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_compare(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i++])
			return (1);
	}
	return (0);
}

int	ft_last_char(char *s, char *set)
{
	int	i;
	int	last;

	i = 0;
	last = 0;
	while (s[i])
	{
		if (!ft_compare(s[i], set))
			last = i;
		i++;
	}
	if (last > 0)
		return (last);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		i;
	int		iter;
	int		last;

	i = 0;
	iter = 0;
	last = ft_last_char((char *)s1, (char *)set);
	while (ft_compare(s1[i], (char *)set))
		i++;
	new_str = malloc(((last - i) + 1) + 1);
	if (!new_str)
		return (0);
	while (s1[i] && i <= last)
		new_str[iter++] = s1[i++];
	new_str[iter] = '\0';
	return (new_str);
}
/*
   int main()
   {
   char    *test;

   test = ft_strtrim("tengo la camisa negra", "a");
   printf(WHITE("%s\n"), test);
   free(test);
   test = ft_strtrim("     tengo la camisa negra", " ");
   printf(WHITE("%s\n"), test);
   free(test);
   test = ft_strtrim(" tengo la camisa negra", " ");
   printf(WHITE("%s\n"), test);
   free(test);
   test = ft_strtrim("       ", "\t \n");
   printf(WHITE("%s\n"), test);
   test = ft_strtrim("abcdba", "acb");
   printf(WHITE("%s\n"), test);
   free(test);
   }
   */
