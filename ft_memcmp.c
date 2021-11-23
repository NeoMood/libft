/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:33:21 by sgmira            #+#    #+#             */
/*   Updated: 2021/11/20 14:11:10 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned int	i;

	i = 0;
	while (((char *) s1)[i] == ((char *) s2)[i] && i < size - 1)
	{
		i++;
	}
	if (s1 != s2 && i < size)
		return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
	else
		return (0);
}
