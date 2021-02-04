/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 09:57:53 by pjacob            #+#    #+#             */
/*   Updated: 2021/01/27 08:14:01 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int mark;

	i = 0;
	while (str[i] != '\0')
	{
		mark = 1;
		while ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= '0' && str[i] <= '9') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'z') && (mark == 1))
			{
				str[i] = str[i] - 32;
				mark = 0;
			}
			else if ((str[i] >= 'A' && str[i] <= 'Z') && (mark == 0))
				str[i] = str[i] + 32;
			else
				mark = 0;
			i++;
		}
		i++;
	}
	return (str);
}
