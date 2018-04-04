/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrindex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 13:28:47 by flecouey          #+#    #+#             */
/*   Updated: 2018/03/31 18:58:23 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strchrindex(const char *s, int c)
{
	int		i;

	i = 0;
	if (c == 0)
		return ((int)ft_strlen(s));
	while (s[i])
	{
		if ((char)s[i] == (char)c)
			return (i);
		i++;
	}
	return (-1);
}
