/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:29:39 by pjacob            #+#    #+#             */
/*   Updated: 2021/01/23 08:46:47 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		while ((nb - 1) > 0)
		{
			nb--;
			result = result * nb;
		}
	return (result);
}
