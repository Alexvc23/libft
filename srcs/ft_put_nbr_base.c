/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:02:15 by jvalenci          #+#    #+#             */
/*   Updated: 2022/03/19 15:25:53 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_base(char *base, int nbr)
{
	int	len;

	len = ft_strlen(base);
	if (!base)
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putstr_fd("-", 1);
	}
	if (nbr >= len)
	{
		ft_putnbr_base(base, (nbr / len));
		ft_putnbr_base(base, (nbr % len));
	}
	else
		ft_putchar_fd(*(base + nbr), 1);
}
