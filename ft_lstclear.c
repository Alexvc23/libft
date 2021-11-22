/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:31:31 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/22 09:32:00 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void del(void *content)
{
    free(content);
    return ;
}

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *ptr;

    if (!*lst || !del)
        return ;
    while (*lst)
    {
        ptr = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = ptr;
    }
    lst = 0;
}
/* 
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

    ptr = &del;
	elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);
    begin = ft_lstnew(str5);
    ft_lstadd_front(&begin, elem4);
    ft_lstadd_front(&begin, elem3);
    ft_lstadd_front(&begin, elem2);
    ft_lstadd_front(&begin, elem);


    ft_lstclear(&elem, ptr);
} */