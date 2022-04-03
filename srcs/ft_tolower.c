/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:07:27 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/05 20:17:48 by alex-ubun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
DESCRIPTION
The tolower() function converts an upper-case letter to the corresponding 
lower-case letter.  The argument must be representable as an unsigned char or 
the value of EOF.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*int main()
{
	char test[] = "TENGO LA CAMISA NEGRA";
	for (int i = 0; test[i] != '\0'; i++)
		printf("%c", ft_tolower(test[i]));
}
*/
