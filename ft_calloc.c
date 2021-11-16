/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:55:29 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/10 13:45:37 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = (nmemb * size);
	if (total_size > 2147483647 || (!nmemb) || (!size))
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*
int main()
{
	int	*test;

	printf(L_YELLOW("ft_calloc test\n"));
	printf(RED("test 0 allocating 10 elements(int) of memory\n"));
	test = ft_calloc(10, sizeof(int));
	if (!test)
	{
		printf(WHITE("NULL\n"));
		goto NEXT1;
	}
	for (int i = 0; i < 10; i++)
		printf(WHITE("%d "), test[i]);
	printf("\n ");
	free(test);
NEXT1:
	printf(RED("------------------------------------------------\n"));
	printf(RED("test 1, allocating 10 bytes of memory with a \
	pointer char\n"));
	test = ft_calloc(10, sizeof(char));
	if (!test)
	{
		printf(WHITE("NULL\n"));
		goto NEXT2;
	}
	for (int i = 0; i < 10; i++)
	printf(WHITE("%d "), test[i]);
	printf("\n ");
	free(test);
NEXT2:
	printf(RED("------------------------------------------------\n"));
	printf(RED("test 2, allocating 2,147,483,647 bytes of \
	memory with a pointer char\n"));
	test = ft_calloc(2147483647, sizeof(char));
	if (!test)
	{
		printf(WHITE("NULL\n"));
		goto NEXT3;
	}
	for (int i = 0; i < 100; i++)
	printf(WHITE("%d "), test[i]);
	printf("........\n ");
	free(test);
NEXT3:
	printf(RED("------------------------------------------------\n"));
	printf(RED("test 3, allocating 2,147,483,646 bytes of \
	memory with a pointer char\n"));
	test = ft_calloc(2147483646, sizeof(char));
	if (!test)
	{
		printf(WHITE("NULL\n"));
		goto NEXT4;
	}
	for (int i = 0; i < 100; i++)
	printf(WHITE("%d "), test[i]);
	printf("........\n ");
	free(test);
NEXT4:
	printf(RED("------------------------------------------------\n"));
}
*/
