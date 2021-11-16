/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:38:30 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/05 11:36:23 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	ccp;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	ldst = ft_strlen(dst);
	ccp = 0;
	while (src[ccp] != '\0' && ldst + 1 < dstsize)
	{
		dst[ldst] = src[ccp];
		ldst++;
		ccp++;
	}
	dst[ldst] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[ccp]));
}

/*int main()
{
	char test[] = "fuctions return the total length of the string they tried \
to create";
	char buff[200];
	char buff1[200];
	char buff2[200];
	char buff3[200] = "the strlcpy() and strlcat ()";
	char buff4[200] = "the strlcpy() and strlcat ()";
	char buff5[200] = "the strlcpy() and strlcat ()";
	char buff6[200] = "the strlcpy() and strlcat ()";

	printf("----------------------------------------------------------\n\n");
	printf("src use for the test in general:\n%s\n\n", test);
	printf("%zu\n", ft_strlcat(buff, test, sizeof(buff)));
	printf("result alfter funcion call: %s\n", buff);
	printf("function return with size 5: %zu\n", ft_strlcat(buff1, test, 5));
	printf("result alfter funcion call: %s\n", buff1);
	printf("function return with size 0: %zu\n", ft_strlcat(buff2, test, 0));
	printf("result alfter funcion call: %s\n", buff2);
	printf("function return with size sizeof(buff): %zu\n", \
ft_strlcat(buff3, test, sizeof(buff)));
	printf("result alfter funcion call: %s\n\n", buff3);
	printf("----------------------------------------------------------\n\n");

	printf("in these examples below, we realize that any modification will\n\
take place due to the fact that dstsize is < than ft_strle(dst)\n\
so we will return the the given dstsize  + ft_strlen(src)\n\n");
	 
	printf("%zu\n", ft_strlcat(buff4, test, 1));
	printf("%s\n", buff4);
	printf("%zu\n", ft_strlcat(buff5, test, 10));
	printf("%s\n", buff5);
	printf("%zu\n", ft_strlcat(buff6, test, 7));
	printf("%s\n", buff6);
}
*/
