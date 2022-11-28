/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:39:34 by ysingh            #+#    #+#             */
/*   Updated: 2022/11/01 07:24:28 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_printtype(str[++i], args);
		else
			len += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}

// int	main(void)
// {
// 	int	i;
// 	int	j;

// 	i = ft_printf("%x\n", 125);
// 	j = printf("%x\n", 125);
// 	printf("mine %d\n and printreal %d\n", i, j);
// }
