/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:33:03 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/23 12:00:58 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void*))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
/* 
void del(void *s)
{
	free(s);
	return;
}

void 	*ft_f(void *s)
{
	char	*str;

	str = (char*)s;
	if (!s)
		return (0); 
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (s);
}
   int main()
   {
   t_list		*begin;
   t_list		*elem;
   t_list		*elem2;
   t_list		*elem3;
   t_list		*elem4;
   t_list      *ptr;
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

   ptr = ft_lstmap(elem, ft_f, del);
   ft_lstprint(&ptr);
   } 
*/
