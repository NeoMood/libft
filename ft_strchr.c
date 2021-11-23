/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:21:18 by sgmira            #+#    #+#             */
/*   Updated: 2021/11/20 14:02:26 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while ((size_t) i <= ft_strlen(str))
	{
		if (str[i] == (char)c)
			return (&((char *) str)[i]);
		i++;
	}
	return (0);
}
