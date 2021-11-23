/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:24:00 by sgmira            #+#    #+#             */
/*   Updated: 2021/11/20 15:03:25 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*s1, const void	*s2, size_t	n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	i = -1;
	if (!s1 && !s2)
		return (NULL);
	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (dst > src)
	{
		while (n)
		{
			n--;
			dst[n] = src[n];
		}
	}
	else
	{
		while (++i < n)
			dst[i] = src[i];
	}
	return (dst);
}
