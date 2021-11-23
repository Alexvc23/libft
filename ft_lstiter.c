/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:52:19 by alex-ubun         #+#    #+#             */
/*   Updated: 2021/11/22 21:54:50 by alex-ubun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	ptr = lst;
	if (!lst || !f)
		return ;
	while (ptr)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
	return ;
}
/* 
void 	ft_f(void *s)
{
	char	*str;

	str = (char*)s;
	if (!s)
		return;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return ;
}

int main()
{
	t_list		*begin;
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
    void        (*ptr)(void*);
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");
    char        *str5 = strdup("tengo la camisa negra");

	elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);
    begin = ft_lstnew(str5);
    ft_lstadd_front(&begin, elem4);
    ft_lstadd_front(&begin, elem3);
    ft_lstadd_front(&begin, elem2);
    ft_lstadd_front(&begin, elem);

	ft_lstiter(elem, ft_f);
	ft_lstprint(&elem);
}
*/
