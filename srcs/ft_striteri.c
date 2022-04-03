/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:02:37 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/23 11:02:44 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* void    tester(unsigned int index, char *c)
   {
   unsigned int temp[100];

   ft_memset(temp, '0', sizeof(temp) / sizeof(temp[0]));
   if (temp[index] == 1)
   {
   printf(RED("wrong index\n"));
   return; 
   }
   if (*c >= 'A' && *c <= 'Z')
 *c += 32;
 if (*c >= 'a' && *c <= 'z')
 (*c -= 32);
 }
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* 
   int main()
   {
   char test[] = "tengo la camisa negra";

   ft_striteri(test, tester);
   printf("%s\n", test);
   }
   */
