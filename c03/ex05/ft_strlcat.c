/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 12:44:56 by pjacob            #+#    #+#             */
/*   Updated: 2021/01/31 14:58:38 by pjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *src)
{
	int i;

	i = 0;
	while (*src++)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len_src;
	unsigned int len_dest;
	unsigned int total_size;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	total_size = len_src + len_dest;
	if (size == 0)
		return (len_src);
	if (len_dest >= size)
		return (len_src + size);
	while (i < (size - len_dest))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (total_size);
}
