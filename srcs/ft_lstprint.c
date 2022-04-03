/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:03:09 by jvalenci          #+#    #+#             */
/*   Updated: 2022/03/27 10:02:05 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstprint(t_list **header)
{
	t_list	*ptr;
   int      i;

	ptr = *header;
	if (!*header)
		return ;
   while (ptr)
   {
      i = 0;
      while (ptr->content[i])
         ft_putstr_fd(ptr->content[i++], 1);
      if (ptr->next)
         ft_putchar_fd(' ', 1);
      ft_putnbr_fd(*(int*)ptr->index, 1);
      ptr = ptr->next;
   }
   ft_putstr_fd("\n", 1);
}
/* int main(int args, char *argv[])
   {
   int i = 1;
   t_list *test;
   int *num;

   num = malloc((args - 1) * sizeof(int));
   test = NULL;
   if (!num)
   return (0);
   while (i <= (args - 1))
   {
   num[i] = ft_atoi(argv[i]);
   i++;
   }
   i = 1;
   while (i <= (args - 1))
   ft_lstadd_back(&test, ft_lstnew(&num[i++]));
   ft_lstprint(test);
   return (0);
   }
   */
