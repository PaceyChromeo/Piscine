/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 10:47:24 by pjacob            #+#    #+#             */
/*   Updated: 2021/01/25 06:54:17 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int a;

	i = 0;
	a = 0;
	if (nb <= 0 || nb == 2)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		a = nb - (i * i);
		if (a == 0)
			return (i);
		else if (a < 0)
			return (0);
		i++;
	}
	return (i);
}
