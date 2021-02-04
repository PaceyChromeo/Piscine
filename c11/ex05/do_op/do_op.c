/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:15:00 by pjacob            #+#    #+#             */
/*   Updated: 2021/02/04 10:45:36 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_do_op(char *s1, char *s2, char *s3)
{
	int x;
	int y;
	int nb;

	nb = 0;
	if (*s1 == 0 || *s2 == 0 || *s3 == 0)
		return ;
	x = atoi(s1);
	y = atoi(s3);
	if (*s2 == '/' && *s3 == '0')
	{	
		printf(DIVIDE_ZERO);
		return ;
	}
	if (*s2 == '%' && *s3 == '0')
	{
		printf(MODULO_ZERO);
		return ;
	}
	if (*s2 == '+')
		nb = x + y;
	if (*s2 == '-')
		nb = x - y;
	if (*s2 == '/' && *s3 != '0')
		nb = x / y;
	if (*s2 == '*')
		nb = x * y;
	if (*s2 == '%' && *s3 != '0')
		nb = x % y;
	printf("%d\n", nb);
}

