/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:51:02 by sgmira            #+#    #+#             */
/*   Updated: 2021/11/20 14:59:46 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	joined = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2)) + 1);
	i = 0;
	if (!joined)
		return (0);
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		joined[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	joined[ft_strlen(s1) + i] = '\0';
	return (joined);
}
