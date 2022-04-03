/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:28:59 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/11 14:42:34 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*ptr;

	ptr = *alst;
	if (!new)
		return ;
	if (!*alst)
	{
		new->previous = NULL;
		*alst = new;
		return ;
	}
	ptr = ft_lstlast(*alst);
	ptr->next = new;
	new->previous = ptr;
}
/* void	ft_printback(t_list **alst)
{
	t_list *last;

	last = ft_lstlast(*alst);
	while(last->content) 
	{
		ft_putnbr_fd(*((int*)last->content), 1);
		if (last->previous)
			last = last->previous;
		else
			return ;
	}
}

   int main(int args, char *argv[])
   {
	   int *num;
	   num = malloc((args - 1) * sizeof(int));
	   t_list *stack_a;

	   int	i = 0;
	   stack_a = NULL;

    while (i <= (args - 2))
	{
		num[i] = ft_atoi(argv[(i + 1)]);
		i++;
	}
		i = 0;
    while (i <= (args - 2))
        ft_lstadd_back(&stack_a, ft_lstnew(&num[i++]));
	ft_lstprint(&stack_a);
	ft_printback(&stack_a);
	ft_putstr_fd("\n", 1);
		return (0);
   } */