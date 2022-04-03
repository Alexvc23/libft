/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:03:47 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/08 13:03:53 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
   The strncmp() function shall compare not more than n bytes (bytes
   that follow a NUL character are not compared) from the array
   pointed to by s1 to the array pointed to by s2.

   The sign of a non-zero return value is determined by the sign of
   the difference between the values of the first pair of bytes
   (both interpreted as type unsigned char) that differ in the
   strings being compared.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (*ptr1 && *ptr2 && *ptr1 == *ptr2 && --n)
	{
		ptr1++;
		ptr2++;
	}
	return (*ptr1 - *ptr2);
}
/* int main()
{
		char	*s1 = "atoms\0\0\0\0";
		char	*s2 = "atoms\0abc";

    printf("%d\n", strncmp(s1,s2, 8));
    printf("%d\n", ft_strncmp(s1,s2, 8));

}
 */
