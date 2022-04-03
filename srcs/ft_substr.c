/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:05:54 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/23 11:59:36 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
LIBRARY: N/A
SYNOPSIS: extract substring from string

DESCRIPTION:
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*d;
	size_t		i;
	size_t		j;

	d = malloc((len + 1) * sizeof(char));
	if (!d || !s)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		d[j++] = s[i++];
	d[j] = '\0';
	return (d);
}
/*
   int main()
   {
   char	*test = "On many machines, this doesn't matter a great deal";
   char	*str = "i just want this part #############";
   size_t len = strlen(test);
   size_t	index;
   char *buff;

   printf(L_YELLOW("test ft_substr\n"));
   printf(RED("string: "));
   printf(WHITE("%s\n"), test);
   printf(RED("to be find: "));
   printf(WHITE(" \n"));
   index = (len - ((long long)&test[len] - (long long)(strstr(test,\
   "doesn't"))));
   buff = ft_substr(test, ft_strlen(test), 233333);
   printf(RED("New string after function call with size 233333: "));
   printf(WHITE("%s\n"), buff);
   free(buff);
   printf(RED("-----------------------------------------------------\n"));
   printf(RED("string: "));
   printf(WHITE("%s\n"), test);
   printf(RED("to be find: "));
   printf(WHITE(",\n"));
   index = (len - ((long long)&test[len] - (long long)(strstr(test,\
   ","))));
   buff = ft_substr(test, index, 8);
   printf(RED("New string after function call with size 8: "));
   printf(WHITE("%s\n"), buff);
   free(buff);
   printf(RED("-----------------------------------------------------\n"));
   printf(RED("string: "));
   printf(WHITE("%s\n"), test);
   printf(RED("to be find: "));
   printf(WHITE("many\n"));
   index = (len - ((long long)&test[len] - (long long)(strstr(test,\
   "many"))));
   buff = ft_substr(test, index, 0);
   printf(RED("New string after function call with size 0: "));
   printf(WHITE("%d\n"), *buff);
   free(buff);
   printf(RED("-----------------------------------------------------\n"));
   printf(RED("string: "));
   printf(WHITE("%s\n"), test);
   printf(RED("to be find: "));
   printf(WHITE("great\n"));
   index = (len - ((long long)&test[len] - (long long)(strstr(test,\
   "great"))));
   buff = ft_substr(test, index, 3);
   printf(RED("New string after function call with size 3: "));
   printf(WHITE("%s\n"), buff);
   free(buff);
   printf(RED("-----------------------------------------------------\n"));
   printf(RED("string: "));
   printf(WHITE("%s\n"), test);
   printf(RED("to be find: "));
   printf(WHITE("index 100\n"));
   buff = ft_substr(test, 100, 1);
   printf(RED("New string after function call with size 1: "));
   printf(WHITE("%s\n"), buff);
   free(buff);
   printf(RED("-----------------------------------------------------\n"));
   printf(RED("string: "));
   printf(WHITE("%s\n"), str);
   printf(RED("to be find: "));
   printf(WHITE(" index  5 with size 10\n"));
   buff = ft_substr(str, 5, 10);
   printf(RED("New string after function call with size 1: "));
   printf("%s\n", buff);
   free(buff);
printf(RED("-----------------------------------------------------\n"));
printf(RED("string: "));
printf(WHITE("%s\n"), str);
printf(RED("to be find: "));
printf(WHITE(" index  5 \n"));
buff = ft_substr(str, 5, 20);
printf(RED("New string after function call with size 20: "));
printf("%s\n", buff);
free(buff);
printf(RED("-----------------------------------------------------\n"));
} */
