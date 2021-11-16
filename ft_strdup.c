/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex-ubuntu <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 08:42:18 by alex-ubun         #+#    #+#             */
/*   Updated: 2021/11/09 09:23:10 by alex-ubun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
DESCRIPTION
The  strdup()  function  returns  a pointer to a new string which is a 
duplicate of the string s.  Memory for the new string is obtained with 
malloc(3), and can be freed with free(3).
*/

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	i = -1;
	dup = malloc((sizeof(char) * ft_strlen(s)) + 1);
	if (!dup)
		return (NULL);
	while (s[++i])
		dup[i] = s[i];
	dup[i] = '\0';
	return (dup);
}
/*
int	main()
{
	char	*test = "tengo la camisa negra";
	char	*buff = ft_strdup(test);
	printf(L_YELLOW("ft_strdup test\n"));
	printf(RED("srcs: "));
	printf(WHITE("%s\n"), test);
	printf(RED("Duplicate: "));
	printf(WHITE("%s\n"), buff);
	return (0);
}
*/
