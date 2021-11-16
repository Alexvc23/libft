/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:27:36 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/03 10:27:07 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
   DEFINITION
   The memcpy function copies n characters from the source object to the
   destination object. If the source and destination objects overlap,
   the behavior of memcpy is undefined.
   IMPLEMENTATION
   Implementation of memcpy is not a big deal, you need to typecast the
   given source and destination address to char* (1 byte). After the
   typecasting copy the data from the source to destination one by one
   until n (given length).
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	pdest = (char *)dest;
	psrc = (const char *)src;
	if (pdest == NULL || psrc == NULL)
		return (NULL);
	while (n--)
		*(pdest++) = *(psrc++);
	return (dest);
}
/*
int main()
{
	char test[] = "aabbccdd"; 
	int n = sizeof(test)/sizeof(test[0]);
	int i = -1;

	ft_memcpy(test + 2, test, 6);
		printf("%s\n", test);
	return (0);
}
*/
