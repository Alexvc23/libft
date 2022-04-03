/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:47:13 by alex-ubun         #+#    #+#             */
/*   Updated: 2021/11/23 11:34:58 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	if (!lst)
		return (0);
	ptr = lst;
	count = 0;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
/* 
   int main()
   {
   int test = 23435;
   int test3  = 12345;

   t_list *result = ft_lstnew(&test);
   t_list *new = ft_lstnew(&test3); 
   ft_lstadd_front(&result->next, new);
   printf("%d\n", ft_lstsize(result));
   } */
