/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex-ubuntu <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:14:01 by alex-ubun         #+#    #+#             */
/*   Updated: 2021/11/19 15:14:45 by alex-ubun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
    if (!new)
    return ;
    if (!alst)
    {
        *alst = new;
        return ;
    }
    new->next = *alst;
    *alst = new;
}
/*  
int main()
{
    int test = 23434;
    int test2  = 12345;
    t_list *result = ft_lstnew(&test);
    t_list *new = ft_lstnew(&test2); 

    ft_lstadd_front(&result->next, new);

    printf("%d\n", *(int*)result->content);
    printf("%d\n", *(int*)result->next->content);
}
 */