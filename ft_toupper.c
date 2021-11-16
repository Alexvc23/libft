/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:42:44 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/05 19:55:43 by alex-ubun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
*DESCRIPTION
*The toupper() function converts a lower-case letter to the corresponding 
*upper-case letter.  The argument must be representable as an unsigned char or 
*the value of EOF.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*int main()
{
	char test[] = "tengo la camisa negra";
	for (int i = 0; test[i] != '\0'; i++)
		printf("%c", ft_toupper(test[i]));
}
*/
