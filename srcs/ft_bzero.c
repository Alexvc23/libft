/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:03:32 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/21 18:58:54 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
   The bzero() function erases the data in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes
       containing '\0') to that area.
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = '\0';
}

/*
int main()
{
	char test[] = "tengo la camisa negra";
	int n = sizeof(test)/sizeof(test[0]);
	int i = -1;


	printf("before functions call: %s #character: %d\n", test, n);
	bzero(test, (sizeof(test)/sizeof(test[0])));
//	ft_bzero(test, (sizeof(test)/sizeof(test[0])));

	while (++i < n)
		printf("%d", test[i]);
		printf(" #character: %d", n);
	return (0);
}
*/	
