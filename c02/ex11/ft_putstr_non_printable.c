/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 13:28:25 by pjacob            #+#    #+#             */
/*   Updated: 2021/01/31 14:10:17 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_base(char c)
{
	char *base;

	base = "0123456789abcdef";
	if (np > 16)
	{
		ft_print_hexa(c / 16);
		ft_print_hexa(c % 16);
	}
	else
		ft_putchar(base[c]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 && str[i] > 0 || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_print_base(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
