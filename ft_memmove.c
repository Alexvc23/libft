/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:25:53 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/03 10:26:19 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
   DEFINITION
   The memmove function copies n characters from the source to the destination
   object. In memmove before copying the characters from source to destination
   object first copied the n character from source to the temporary array,
   after that copy n character from the temporary array to the destination
   object. It prevents from the undefined behavior when the source and
   destination object overlaps.
   */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;
	char		*temp;
	size_t		i;

	pdest = dest;
	psrc = src;
	i = -1;
	temp = malloc(n * sizeof(char));
	if (!temp)
		return (NULL);
	while (++i < n)
		*(temp + i) = *(psrc + i);
	i = -1;
	while (++i < n)
		*(pdest + i) = *(temp + i);
	free(temp);
	return (dest);
}
/*
   here we make an example between ft_memcpy and ft_memmove showing the 
   behavior of each function when facing overlapping

int main()
{
	char str1[50] = "I am going from Delhi to Gorakhpur";
	char str2[50] = "I am going from Delhi to Gorakhpur";
	int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };
	int data1[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };
	//	Use of ft_memmove
	printf( "Function:\tft_memmove with overlap\n" );
	printf( "Orignal :\t%s\n",str1);
	printf( "Source:\t\t%s\n", str1 + 5 );
	printf( "Destination:\t%s\n", str1 + 11 );
	ft_memmove( str1 + 11, str1 + 5, 29 );
	printf( "Result:\t\t%s\n", str1 );
	printf( "Length:\t\t%ld characters\n\n", strlen( str1 ) );
	//Use of ft_memcpy
	printf( "Function:\tft_memcpy with overlap\n" );
	printf( "Orignal :\t%s\n",str2);
	printf( "Source:\t\t%s\n", str2 + 5 );
	printf( "Destination:\t%s\n", str2 + 11 );
	ft_memcpy( str2 + 11, str2 + 5, 29 );
	printf( "Result:\t\t%s\n", str2 );
	printf( "Length:\t\t%ld characters\n\n", strlen( str2 ) );

	memmove((data1 + 1), data, (sizeof(data)/sizeof(data[0])));
		for(int i = 0; i < 10; i++)
			printf("%d ",data1[i]);

	return 0;
}
*/
