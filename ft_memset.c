/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:27:50 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/02 15:30:14 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
   The memset function copies the value of c (converted to an unsigned char) 
   into each of the first n characters of the object pointed to by s.

	// s ==> Starting address of memory to be filled
	// x   ==> Value to be filled
	// n   ==> Number of bytes to be filled starting
	//         from s to be filled
	void *memset(void *s, int x, size_t n);
*/

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;

	p = s;
	while (len--)
		*p++ = (unsigned char)c;
	return (s);
}
