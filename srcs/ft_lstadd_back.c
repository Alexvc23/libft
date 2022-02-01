/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:28:59 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/23 11:29:24 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*ptr;

	ptr = *alst;
	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	ptr = ft_lstlast(*alst);
	ptr->next = new;
}
/*
   int main()
   {
   t_list *ptr = ft_lstnew("this is the head node");
   t_list *test = ft_lstnew("tengo la camisa negra y el segundo node");
   t_list *test1 = ft_lstnew("this is the last node");

   ft_lstadd_front(&ptr, test);
   ft_lstadd_back(&ptr, test1);
   ft_lstprint(&ptr);
   }
   */
