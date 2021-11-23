/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:46:26 by sgmira            #+#    #+#             */
/*   Updated: 2021/11/20 15:03:04 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	alpha;
	int	noalpha;

	alpha = 1;
	noalpha = 0;
	if (c < 65 || (c > 90 && c < 97) || c > 122)
	{
		return (noalpha);
	}
	return (alpha);
}
