/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:47:05 by sgmira            #+#    #+#             */
/*   Updated: 2021/11/20 15:01:36 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (((char *) str));
	}
	while (((char *) str)[i] != '\0')
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j] && (i + j) < n)
		{
			if (to_find[j + 1] == '\0')
			{
				return (&((char *) str)[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
