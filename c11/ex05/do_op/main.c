/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:32:41 by pjacob            #+#    #+#             */
/*   Updated: 2021/02/04 10:46:12 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int main(int ac, char **av)
{
	if (ac == 4)
		ft_do_op(av[1], av[2], av[3]);
	else
		printf("\n");
	return (0);
}
