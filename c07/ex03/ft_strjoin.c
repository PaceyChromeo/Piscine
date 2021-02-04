/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 12:04:02 by pjacob            #+#    #+#             */
/*   Updated: 2021/02/03 11:17:20 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_total_str(int size, char **strs, char *sep)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (strs[i] != '\0')
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += (ft_strlen(sep) * (size - 1) + 1);
	return (len);
}

char	*ft_strcat(char *s1, char *s2)
{
	int len;
	int i;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		total_len;
	int		i;

	i = 0;
	if (size == 0)
	{
		join = malloc(sizeof(char));
		*join = 0;
		free(join);
		return (join);
	}
	total_len = ft_total_str(size, strs, sep);
	if (!(join = malloc(sizeof(char) * total_len + 1)))
		return (0);
	while (i < size)
	{
		ft_strcat(join, strs[i]);
		if (i != (size - 1))
			ft_strcat(join, sep);
		i++;
	}
	join[total_len] = '\0';
	return (join);
}
