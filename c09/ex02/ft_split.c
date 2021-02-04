/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:16:04 by pjacob            #+#    #+#             */
/*   Updated: 2021/02/04 07:17:28 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_count(char *str, char *charset)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (ft_is_charset(str[i], charset) == 1 && str[i])
			i++;
		if (str[i])
		{
			word++;
			while ((ft_is_charset(str[i], charset)) == 0 && str[i])
				i++;
		}
	}
	return (word);
}

int		ft_len_word(char *str, char *charset)
{
	int len;

	len = 0;
	while (str[len] && ft_is_charset(str[len], charset) == 0)
		len++;
	return (len);
}

char	*ft_strndup(char *src, int n)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(dest = malloc(sizeof(char) * n + 1)))
		return (0);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		x;
	int		size;
	char	**split;

	i = 0;
	x = 0;
	if (!(split = malloc(sizeof(char *) * (ft_count(str, charset) + 1))))
		return (0);
	while (str[i])
	{
		if (ft_is_charset(str[i], charset) == 0 && str[i])
		{
			size = ft_len_word(&str[i], charset);
			if (!(split[x++] = ft_strndup(&str[i], size)))
				return (NULL);
			i = i + size;
		}
		else
			i++;
	}
	split[x] = 0;
	return (split);
}
