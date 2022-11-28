/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:28:37 by ysingh            #+#    #+#             */
/*   Updated: 2022/10/19 16:21:46 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
	return (1);
}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (ft_putstr_fd("(null)", 1));
	if (s)
		while (s[i])
			write(fd, &s[i++], 1);
	return (i);
}

int	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = ft_get_nbr(n);
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
	return (i);
}

int	ft_get_nbr(int i)
{
	int	j;

	j = 1;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		i = i / 10;
		j++;
	}
	return (j);
}

int	ft_putunbr_fd(unsigned int n, int fd)
{
	int	i;

	i = ft_cont(n);
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
	return (i);
}
