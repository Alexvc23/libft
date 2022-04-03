/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:52:58 by alex-ubun         #+#    #+#             */
/*   Updated: 2021/11/23 11:54:20 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (0);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}
/* 
   int main()
   {
   int test = 23435;
   int test3 = 12345;
   t_list *ptr;

   t_list *result = ft_lstnew(&test);
   t_list *new = ft_lstnew(&test3);
   ft_lstadd_front(&result->next, new);
   ptr = ft_lstlast(result);
   printf("%d\n", ft_lstsize(result));
   printf("%d\n", *(int*)ptr->content);
   } */
