/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:38:07 by sgmira            #+#    #+#             */
/*   Updated: 2021/11/12 19:59:09 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	s;
	size_t	i;
	char	*x;

	x = (char *) src;
	s = 0;
	i = 0;
	while (x[s] != '\0')
		s++;
	if (size > 0)
	{
		while (x[i] != '\0' && i < size - 1)
		{
			dest[i] = x[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (s);
}
