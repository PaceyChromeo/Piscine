/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:28:45 by pjacob            #+#    #+#             */
/*   Updated: 2021/02/04 09:56:13 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int			ft_check_base(char *base, int size)
{
	int i;

	i = 0;
	if (*base == 0 || *base == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		size = ft_strlen(base);
		while (i < size)
		{
			if (base[i] == base[size])
				return (0);
			size--;
		}
		i++;
	}
	return (1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	unsigned int	size;
	
	size = 0;
	if (ft_check_base(base, ft_strlen(base)))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			n = -nbr;
		}
		else
			n = nbr;
		while (base[size] != '\0')
			size++;
		if (n >= size)
		{
			ft_putnbr_base(n / size, base);
			ft_putnbr_base(n % size, base);
		}
		else
			ft_putchar(base[n]);
	}
}
