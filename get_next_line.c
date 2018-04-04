/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:42:51 by flecouey          #+#    #+#             */
/*   Updated: 2018/03/31 19:37:48 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int			len_read;
	int			endl;
	char		*str;
	static char	buf[BUFF_SIZE + 1];

	endl = 0;
	str = ft_strnew(0);
	len_read = BUFF_SIZE;
	ft_memset(buf, 0, BUFF_SIZE + 1);
	while ((len_read = read(fd, buf, BUFF_SIZE)) && endl == 0)
	{
		buf[len_read] = '\0';
		ft_putendl("coucou");
		str = ft_strjoin((const char*)str, (const char*)buf);
		if (ft_strchr((const char*)buf, '\n'))
			endl = 1;
	}
	ft_putendl(str);
	if (len_read == 0)
		return (0);
	str = ft_strsub(str, 0, ft_strchrindex(str, '\n'));
	if (!(*line = ft_memalloc(sizeof(char) * ft_strlen(str))))
		return (-1);
	*line = (char*)str;
	return (1);
}
