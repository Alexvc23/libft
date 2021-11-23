/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:10:47 by alex-ubun         #+#    #+#             */
/*   Updated: 2021/11/23 11:58:03 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	nb;

	nb = (long long)n;
	if (nb < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
/* 
   int main()
   {
   int i = 0;
   int fd;
   char buff[20];

   fd = open("test.txt", O_WRONLY | O_CREAT, S_IWUSR);
   if (fd < 0)
   {
   printf("Error creating file");
   return (0);
   }
   ft_putnbr_fd(23434, fd);
   ft_putchar_fd('\n', fd);
   ft_putnbr_fd(-23434, fd);
   ft_putchar_fd('\n', fd);
   ft_putnbr_fd(0, fd);
   close(fd);
   fd = open("test.txt", O_RDONLY, S_IRUSR);
   if (fd < 0)
   {
   printf("error reading file");
   return (0);
   }
   while (read(fd, &buff[i], 1))
   i++;
   printf("%s\n", buff);
   }
   */
