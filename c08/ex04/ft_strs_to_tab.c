/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:33:18 by pjacob            #+#    #+#             */
/*   Updated: 2021/01/29 09:52:42 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*copy;
	int		len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	copy = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!copy)
		return (0);
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_stock_str			*s_str;

	i = 0;
	s_str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(s_str))
		return (NULL);
	while (i < ac)
	{
		s_str[i].size = ft_strlen(av[i]);
		s_str[i].str = av[i];
		s_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_str[i].str = 0;
	return (s_str);
}
