/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:58:41 by sgmira            #+#    #+#             */
/*   Updated: 2021/11/20 14:05:25 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	digit;
	int	nodigit;

	digit = 1;
	nodigit = 0;
	if (c < 48 || c > 57)
	{
		return (nodigit);
	}
	return (digit);
}
