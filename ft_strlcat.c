/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:42:28 by sgmira            #+#    #+#             */
/*   Updated: 2021/11/14 18:34:34 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ls;
	size_t	ld;
	size_t	rtn;

	ls = ft_strlen(src);
	ld = ft_strlen(dest);
	if (size < ld || size == 0)
		return (ls + size);
	else
		rtn = ls + ld;
	i = 0;
	while (src[i] && ld < size - 1)
	{
		dest[ld] = src[i];
		ld++;
		i++;
	}
	dest[ld] = '\0';
	return (rtn);
}
