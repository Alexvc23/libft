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
	while (*ptr1 == *ptr2 && --n)
	{
		ptr1++;
		ptr2++;
	}
	return (*ptr1 - *ptr2);
}
/*
   int	main()
   {
   printf(L_YELLOW("---test ft_strncmp---\n"));
   printf(WHITE("1. things aren't the way they were before\n\
   2. things aren't the way they were before\n"));
   printf(RED("after function call with size (string 1):\n"));
   printf(WHITE("%d\n"), ft_strncmp("things aren't the way they were before", \
   "things aren't the way they were before", \
   sizeof("things aren't the way they were before")));
   printf(WHITE("%d\n"), strncmp("things aren't the way they were before", \
   "things aren't the way they were before", \
   sizeof("things aren't the way they were before")));
   printf(RED("----------------------------------------\n"));
   printf(WHITE("1. things aren't the way they were before\n\
   2. things aren't the way they were before\n"));
   printf(RED("after function call with size (5):\n"));
   printf(WHITE("%d\n"), ft_strncmp("things aren't the way they were before", \
   "things aren't the way they were before", 5)); 
   printf(WHITE("%d\n"), strncmp("things aren't the way they were before", \
   "things aren't the way they were before", 5)); 
   printf(RED("----------------------------------------\n"));
   printf(WHITE("1. things aren't r\n\
   2. things aren't the way they were before\n"));
   printf(RED("after function call with size (100):\n"));
   printf(WHITE("%d\n"), ft_strncmp("things aren't r", \
   "things aren't the way they were before", 100)); 
   printf(WHITE("%d\n"), strncmp("things aren't r", \
   "things aren't the way they were before", 100)); 
   printf(RED("----------------------------------------\n"));
   printf(WHITE("1. things aren't r\n\
   2. things aren't the way they were before\n"));
   printf(RED("after function call with size (0):\n"));
   printf(WHITE("%d\n"), ft_strncmp("zhings aren't r", \
   "things aren't the way they were before", 0)); 
   printf(WHITE("%d\n"), strncmp("zhings aren't r", \
   "things aren't the way they were before", 0)); 
   }
 */
