/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:55:29 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/18 11:42:32 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = (nmemb * size);
	if (total_size > 2147483647)
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
   char *test = calloc(0,0);
   char *test2 = ft_calloc(0,0);

   test == NULL? printf("test is null alfter calloc(0,0)\n") : \
   printf("test is not null alfter calloc(0,0)\n");
   test2 == NULL? printf("test2 is null alfter ft_calloc(0,0)\n") : \
   printf("test2 is not null alfter ft_calloc(0,0)\n");
   }
   */
