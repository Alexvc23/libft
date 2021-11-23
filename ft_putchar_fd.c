/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:07:21 by alex-ubun         #+#    #+#             */
/*   Updated: 2021/11/23 11:35:15 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
/* 
   int main()
   {
   char buff[100];
   int fd;

   fd = open("test.txt", O_WRONLY);
   for (int i = 0; i < 22; i++)
   ft_putchar_fd('a' + i, fd);
   close(fd);
   fd = open("test.txt", O_RDONLY);
   for (int i = 0; i < 22; i++)
   read(fd, &buff[i], 1);
   buff[22] = '\0';
   printf("%s\n", buff);
   close(fd);
   } */
