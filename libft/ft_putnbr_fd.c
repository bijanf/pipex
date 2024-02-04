/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:09:10 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/23 19:52:16 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
/*
#include <stdlib.h>
#include <unistd.h>
#include  <stdio.h>

int main(void)
{
	ft_putnbr_fd(0, 2);
	printf("\n");
    ft_putnbr_fd(5, 1);
	printf("\n");
    ft_putnbr_fd(-5, 2);
	printf("\n");
    ft_putnbr_fd(42, 1);
	printf("\n");
    ft_putnbr_fd(-57, 2);
	printf("\n");
    ft_putnbr_fd(164189, 1);
	printf("\n");
	ft_putnbr_fd(-9874441, 2);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648LL, 2);
	printf("\n");
	return (0);
}
*/
