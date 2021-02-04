/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:09:18 by pjacob            #+#    #+#             */
/*   Updated: 2021/01/25 17:21:23 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;

	i = 0;
	len = (max - min);
	*range = malloc(sizeof(*range) * (max - min));
	if ((*range) == NULL)
		return (0);
	if (min >= max)
	{
		(*range) = 0;
		return (0);
	}
	while (i < len)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
