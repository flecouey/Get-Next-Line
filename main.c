/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:43:48 by flecouey          #+#    #+#             */
/*   Updated: 2018/03/31 19:38:22 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		i;
	char	**line;
	int		fd;

	i = 0;
	line = NULL;
	if (argc != 2)
	{
		ft_putendl("usage : ./get_next_line file line");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putendl("open() failed");
		return (-1);
	}
	while (i < 1)
	{
		if (get_next_line((const int)fd, line) == -1)
		{
			ft_putendl("error");
			return (0);
		}
		ft_putendl((const char*)*line);
		i++;
	}
	return (0);
}
