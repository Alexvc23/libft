/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:27:19 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/02 15:27:27 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
   The memechr fucntion finds the first occurrence of c (converted to an   \
   unsigned char) in the initial n characters (each iterpreted as unsigned \
   char) of the object pointed to by s

   RETURN VALUE
   The memchr function returns a pointer to the located character, or a    \
   null pointer if the character does not occur in the object.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*pchar;

	p = (unsigned char *)s;
	pchar = NULL;
	i = -1;
	while (++i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			pchar = (p + i);
			return (pchar);
		}
	}
	return (NULL);
}
/*
int main()
{
	char test[] = "123456789";

	printf("object used to do the search %s\n", test);
	printf("char to be searched: 7\n");
	printf("return value ft_memchar: %s\n", (char *)ft_memchr(test, '7', \
	sizeof(test)));
	return (0);
}
*/
