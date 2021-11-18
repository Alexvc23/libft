/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:29:17 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/18 12:02:08 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

int	ft_count_strings(char *str, char c, int count)
{
	if (!*str)
		return (count);
	while (*str == c)
		str++;
	if (*str && *str != c)
		count++;
	while (*str && *str != c)
		str++;
	return (ft_count_strings(str, c, count));
}

char	*ft_new_word(char *s, char charset, int index, char **arr)
{
	char	*new_str;
	int		len;
	int		i;
	int		j;

	i = index;
	len = 0;
	j = 0;
	while (s[i] && s[i++] != charset)
		len++;
	new_str = malloc((len + 1) * sizeof(char));
	if (!new_str)
	{
		ft_free(arr);
		return (NULL);
	}
	i = index;
	while (s[i] && s[i] != charset && j <= len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		index;
	int		i;
	int		words;

	index = 0;
	i = 0;
	words = ft_count_strings((char *)s, c, 0);
	new_str = malloc((words + 1) * sizeof(char *));
	if (!new_str)
		return (NULL);
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (s[index] && s[index] != c)
			new_str[i++] = ft_new_word((char *)s, c, index++, new_str);
		while (s[index] && s[index] != c)
			index++;
	}
	new_str[i] = NULL;
	return (new_str);
}
/* 
int main()
{
char **test;
int i = 0;

test = ft_split("tengo la camisa negra", ' ');
for (i = 0; i < ft_count_strings("tengo la camisa negra", ' ', 0); i++)
printf(WHITE("%s\n"), test[i]);
i = 0;
while (test[i])
free(test[i++]);
free(test);
test = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Sed non risus. Suspendisse", ' ');
for (i = 0; i < ft_count_strings("lorem ipsum dolor sit amet, consectetur \
adipiscing elit. Sed non risus. Suspendisse", ' ', 0); i++)
printf(WHITE("%s\n"), test[i]);

test = ft_split("      split       this for   me  !       ", ' ');
char **expected = ((char *[6]){"split", "this", "for", "me", "!", NULL});
printf(RED("split result: "));
for (i = 0; i < ft_count_strings("      split       this for   me  !       ",\
' ', 0); i++)
printf(WHITE("%s "), test[i]);
printf("\n");
printf(RED("expected result: "));
for (i = 0; i < ft_count_strings("      split       this for   me  !       ",\
' ', 0); i++)
printf(WHITE("%s "), expected[i]);
printf("\n");
while (test[i])
free(test[i++]);
free(test);

test = ft_split("split  ||this|for|me|||||!|", '|');
char **expected1 = (char *[6]){"split  ", "this", "for", "me", "!", NULL};
printf(RED("split result: "));
for (i = 0; i < ft_count_strings("split  ||this|for|me|||||!|", '|', 0); i++)
printf(WHITE("%s "), test[i]);
printf("\n");
printf(RED("expected result: "));
for (i = 0; i < ft_count_strings("split  ||this|for|me|||||!|", '|', 0); i++)
printf(WHITE("%s "), expected1[i]);
printf("\n");
while (test[i])
free(test[i++]);
free(test);

char **expected2 = (char *[6]){"split", "this", "for", "me", "!", NULL};
test = ft_split("      split       this for   me  !       ", ' ');
printf(RED("split result: "));
for (i = 0; i < ft_count_strings("      split       this for   me  !       ",\
' ', 0); i++)
printf(WHITE("%s "), test[i]);
printf("\n");
printf(RED("expected result: "));
for (i = 0; i < ft_count_strings("      split       this for   me  !       ",\
' ', 0); i++)
printf(WHITE("%s "), expected2[i]);
printf("\n");
while (test[i])
free(test[i++]);
free(test);

char **expected3 = ft_split("\0aa\0bbb", '\0');
for (i = 0; i < ft_count_strings("\0aa\0bbb", '\0', 0); i++)
printf(WHITE("%s "), expected3[i]);
printf("\n");
} */
