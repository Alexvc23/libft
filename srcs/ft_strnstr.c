/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:56:56 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/10 12:52:43 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
The strnstr() function locates the first occurrence of the null-terminated
string needle in the string haystack, where not more than len characters are
searched.  Characters that appear after a `\0' character are not searched.
Since the strnstr() function is a FreeBSD specific API, it should only be
used when portability is not a concern.
*/

int	to_find(char *needle, char *string, int n)
{
	while (*needle)
	{
		if (*needle != *string || !n)
			return (0);
		needle++;
		string++;
		n--;
	}
	return (1);
}

char	*ft_strnstr(const char *heystack, const char *needle, int n)
{
	char	*pneedle;
	char	*pheystack;

	pheystack = (char *)heystack;
	pneedle = (char *)needle;
	if (!*needle)
		return (pheystack);
	while (*pheystack && n)
	{
		if (to_find(pneedle, pheystack, n))
			return (pheystack);
		pheystack++;
		n--;
	}
	return (NULL);
}
/*
int	main()
{
	const	char heystack[] = "lorem ipsum dolor sit ame";
	const	char needle[] = "lorem";
	char	*empty = (char *)"";

	printf(L_YELLOW("ft_strnstr test\n"));
	printf(RED("heystack:  "));
	printf(WHITE("%s\n"), heystack);
	printf(RED("needle:  "));
	printf(WHITE("%s\n"), needle);
	printf(L_YELLOW("Result after function call with size(heystack): "));
	printf(WHITE("%s\n"), ft_strnstr(heystack, needle, 15));
	printf(RED("--------------------------------------------------\n"));
	printf(L_YELLOW("ft_strnstr test\n"));
	printf(RED("heystack:  "));
	printf(WHITE("%s\n"), heystack);
	printf(RED("needle:  "));
	printf(WHITE("%s\n"), "ipsum");
	printf(L_YELLOW("Result after function call with size 15: "));
	printf(WHITE("%s\n"), ft_strnstr(heystack, "ipsum", 15));
	printf(RED("--------------------------------------------------\n"));
	printf(L_YELLOW("ft_strnstr test\n"));
	printf(RED("heystack:  "));
	printf(WHITE("%s\n"), heystack);
	printf(RED("needle:  "));
	printf(WHITE("%s\n"), needle);
	printf(L_YELLOW("Result after function call with size 0: "));
	printf(WHITE("%s\n"), ft_strnstr(heystack, needle , 0));
	printf(RED("--------------------------------------------------\n"));
	printf(L_YELLOW("ft_strnstr test\n"));
	printf(RED("heystack:  "));
	printf(WHITE("%s\n"), "lorem ipsum dolor sit amet");
	printf(RED("needle:  "));
	printf(WHITE("%s\n"), "dolor");
	printf(L_YELLOW("Result after function call with size 15: "));
	printf(WHITE("%s\n"), ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf(RED("--------------------------------------------------\n"));
	printf(L_YELLOW("ft_strnstr test\n"));
	printf(RED("heystack:  "));
	printf(WHITE("%s\n"), "aaabcabcd");
	printf(RED("needle:  "));
	printf(WHITE("%s\n"), "aaabc");
	printf(L_YELLOW("Result after function call with size 5: "));
	printf(WHITE("%s\n"), ft_strnstr("aaabcabcd", "aaabc", 5));
	printf(RED("--------------------------------------------------\n"));
	printf(L_YELLOW("ft_strnstr test\n"));
	printf(RED("heystack:  "));
	printf(WHITE("%s\n"), "");
	printf(RED("needle:  "));
	printf(WHITE("%s\n"), "");
	printf(L_YELLOW("Result after function call with size 0: "));
	BOOL(ft_strnstr(empty, "", 0) == empty);
	printf(RED("--------------------------------------------------\n"));
	printf(L_YELLOW("ft_strnstr test\n"));
	printf(RED("heystack:  "));
	printf(WHITE("%s\n"), "");
	printf(RED("needle:  "));
	printf(WHITE("%s\n"), "");
	printf(L_YELLOW("Result after function call with size 0: "));
	BOOL(ft_strnstr(empty, "", -1) == empty);
}
*/
