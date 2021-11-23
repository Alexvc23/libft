/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:03:22 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/23 11:03:33 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char tester(unsigned int index, char c)
   {
   unsigned int temp[100];

   ft_memset(temp, '0', sizeof(temp) / sizeof(temp[0]));
   if (temp[index] == 1)
   {
   printf(RED("wrong index\n"));
   return (0);
   }
   if (c >= 'A' && c <= 'Z')
   return (c + 32);
   if (c >= 'a' && c <= 'z')
   return (c - 32);
   else
   return (c);
   } */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
/* int main()
   {
   char *test = "tengo la camisa negra";
   char *buff;

   buff = ft_strmapi(test, tester);
   printf("%s\n", buff);
   }
   */
