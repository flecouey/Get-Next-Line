/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextsquare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:48:03 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/21 19:41:35 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Renvoie la racine du carré directement supérieur ou égal à x.
*/

int		ft_nextsquare(int x)
{
	int		y;
	int		z;

	y = 1;
	z = 1;
	while (y < x)
	{
		z++;
		y = z * z;
	}
	return (z);
}
