/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:53:06 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/22 09:53:49 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
function to print all contents of a liked list
*/

void	ft_lstprint(t_list **head)
{
    t_list  *ptr;

    ptr = *head;
    if (!head)
    {
        printf("no node was provided");
        return ;
    }
    while (ptr)
    {
        printf("%s\n", (char*)ptr->content);
        if (ptr->next)
            ptr = ptr->next;
        else
        return ;
    }
}
