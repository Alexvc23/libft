/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:54:51 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/18 09:51:23 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (!dst || !src)
		return (0);
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*
   int main()
   {
   char test[] = "paramentes and output result";
   char buffer[70];
   char buffer1[70];
   char buffer2[70];
   char buffer3[70];

   ft_memset(buffer, 'A', sizeof(buffer));
   ft_memset(buffer1, 'A', sizeof(buffer1));
   ft_memset(buffer2, 'A', sizeof(buffer2));
   ft_memset(buffer3, 'A', sizeof(buffer3));

//first test
printf(L_YELLOW("ft_strlcpy test\n"));
printf(BLUE("test1 with negative size of -1\n"));
printf(RED("size returned by ft_strlcpy: "));
printf(WHITE("%lu\n"), ft_strlcpy(buffer, test, -1));
printf(RED("buffer after ft_strlcpy call: "));
printf(WHITE("%s\n"), buffer);
printf(RED("-------------------------------------\n"));
//second test
printf(BLUE("test1 with real size\n"));
printf(RED("size returned by ft_strlcpy: "));
printf(WHITE("%lu\n"), ft_strlcpy(buffer1, test, sizeof(test)));
printf(RED("buffer after ft_strlcpy call: "));
printf(WHITE("%s\n"), buffer1);
printf(RED("-------------------------------------\n"));
// third test
printf(BLUE("test1 with size 5\n"));
printf(RED("size returned by ft_strlcpy: "));
printf(WHITE("%lu\n"), ft_strlcpy(buffer2, test, 5));
printf(RED("buffer after ft_strlcpy call: "));
printf(WHITE("%s\n"), buffer2);
printf(RED("-------------------------------------\n"));
printf(BLUE("test1 with size 0\n"));
printf(RED("size returned by ft_strlcpy: "));
printf(WHITE("%lu\n"), ft_strlcpy(buffer3, test, 0));
printf(RED("buffer after ft_strlcpy call: "));
printf(WHITE("%s\n"), buffer3);
printf(RED("-------------------------------------\n"));
}
*/
