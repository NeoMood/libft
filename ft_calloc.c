/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:14:25 by sgmira            #+#    #+#             */
/*   Updated: 2021/11/20 15:55:43 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*a;

	a = (int *) malloc (size * count);
	if (a == NULL)
		return (NULL);
	a = ft_memset(a, 0, size * count);
	return (a);
}
