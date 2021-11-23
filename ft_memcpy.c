/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:27:36 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/23 11:56:54 by jvalenci         ###   ########lyon.fr   */
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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/* 
int main()
{
	char test[] = "aabbccdd"; 
	char test1[] = "aabbccdd"; 
	int n = sizeof(test)/sizeof(test[0]);

	ft_memcpy(test + 2, test, 6);
	memcpy(test1 + 2, test1, 6);
	printf("%s\n", test);
	printf("%s\n", test1);
	return (0);
}
 */
