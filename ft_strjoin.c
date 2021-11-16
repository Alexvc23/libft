/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:49:19 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/15 13:50:04 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;
	int		iter;

	i = 0;
	iter = 0;
	new_string = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new_string)
		return (NULL);
	while (s1[i])
		new_string[iter++] = s1[i++];
	i = 0;
	while (s2[i])
		new_string[iter++] = s2[i++];
	new_string[iter] = '\0';
	return (new_string);
}
/*
   int main()
   {
   char *test;

   test = ft_strjoin("buenos dias amigitos", " como estan");
   printf(WHITE("%s\n"), test);
   free(test); 
   test = ft_strjoin("", " como estan");
   printf(WHITE("%s\n"), test);
   free(test); 
   test = ft_strjoin("buenos dias amigitos", "");
   printf(WHITE("%s\n"), test);
   free(test); 
   test = ft_strjoin("", "");
   printf(WHITE("%s\n"), test);
   free(test); 
   }
   */
