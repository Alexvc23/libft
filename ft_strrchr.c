/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:04:02 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/08 13:04:06 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
The strrchr() function shall locate the last occurrence of c
(converted to a char) in the string pointed to by s.  The
terminating NUL character is considered to be part of the string.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	cptr;
	char	*ptr;
	int		counter;				
	int		i;

	cptr = (char)c;
	ptr = (char *)s;
	counter = -1;
	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == cptr)
			counter = i;
		i++;
	}
	if (ptr[i] == cptr)
	{
		counter = i;
		return (&ptr[counter]);
	}
	if (counter > -1)
		return (&ptr[counter]);
	return (NULL);
}
/*
int	main()
{
	char string[] = "tengo la camisa verde";
	char to_find = 'a';

	printf(RED("string to be analyzed: "));
	printf("%s\n", string);
	printf(RED("character to be find: "));
	printf("%c\n", to_find);
	printf(RED("Pointer returned: "));
	printf("%s\n", ft_strrchr(string, to_find));
	printf(CYAN("------------------------------------\n"));
	printf(RED("string to be analyzed: "));
	printf("%s\n", string);
	printf(RED("character to be find: "));
	printf("0\n");
	printf(RED("Pointer returned: "));
	printf("%s\n", ft_strrchr(string, '\0'));
}
*/
