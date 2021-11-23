/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:35:59 by sgmira            #+#    #+#             */
/*   Updated: 2021/11/20 14:04:56 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	ascii;
	int	noascii;

	ascii = 1;
	noascii = 0;
	if (c < 0 || c > 127)
	{
		return (noascii);
	}
	return (ascii);
}
