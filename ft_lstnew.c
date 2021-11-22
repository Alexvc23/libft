/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex-ubuntu <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:01:16 by alex-ubun         #+#    #+#             */
/*   Updated: 2021/11/19 11:22:14 by alex-ubun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}
/* 
int main()
{
    int test = 23434;
    t_list *result = ft_lstnew(&test);

    printf("%d\n", *(int*)result->content);
}
 */