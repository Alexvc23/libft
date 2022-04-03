/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:21:31 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/05 21:14:51 by alex-ubun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
The memcmp function compares the first n characters of the object pointed to 
by s1 to the first n characters of the object pointed to by s2. If the n 
characters of s1 and s2 are the same then it returns 0, otherwise, it returns 
a non-zero value.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (*ptr1 == *ptr2 && --n)
	{
		ptr1++;
		ptr2++;
	}
	if (ptr1 != ptr2)
		return ((int)(*ptr1 - *ptr2));
	return (0);
}
/*int	main()
{

	printf("%d\n", ft_memcmp("tengo la camisa", "tengo lA camisa", 8 ));
	printf("%d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%d\n", ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	printf("----------------------------------------------------\n");
	printf("%d\n", memcmp("tengo la camisa", "tengo lA camisa", 8 ));
	printf("%d\n", memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%d\n", memcmp("zyxbcdefgh", "abcdefgxyz", 0));
}
*/
