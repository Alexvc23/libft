/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_prev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:59:54 by jvalenci          #+#    #+#             */
/*   Updated: 2022/03/19 15:20:34 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_check_prev(t_list **alst)
{
	t_list	*temp;

	temp = *alst;
	while (temp->next)
	{
		temp->next->previous = temp;
		temp = temp->next;
	}
}
