/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:02:55 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/10 14:46:53 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
 locate first occurrence of character in string
 Returns a pointer to the first occurrence of character in the C string str.
 The terminating null-character is considered part of the C string. Therefore,
 it can also be located in order to retrieve a pointer to the end of a string.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (char)c != *s)
		s++;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}
/*
int	main()
{
	char test[] = "the firest occurence of c";
	
	printf("%d\n", 'c' - 256);
	printf("%c\n",  'c');
	printf("%s\n", ft_strchr(test, '\0'));
}
*/
