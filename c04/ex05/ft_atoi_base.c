/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 10:11:41 by pjacob            #+#    #+#             */
/*   Updated: 2021/02/01 15:29:58 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_check_base(char *base)
{
	int i;
	int size;

	i = 0;
	if (*base == 0 || *base == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == ' ' || base[i] == '+' || base[i] == '-')
			return (0);
		size = ft_strlen(base);
		while (i < size)
		{
			if (base[size] == base[i])
				return (0);
			size--;
		}
		i++;
	}
	return (1);
}

int		ft_get_nbr(char *base, char c)
{
	int i;

	i = 0;
	while (base[i] != c && base[i] != '\0')
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int neg;
	int nb;
	int i;
	int len;

	neg = 1;
	nb = 0;
	i = 0;
	len = ft_strlen(base);
	if (ft_check_base(base) == 0)
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] >= base[0] && str[i] <= base[len - 1])
	{
		nb = (nb * len) + ft_get_nbr(base, str[i]);
		i++;
	}
	return (nb - neg);

