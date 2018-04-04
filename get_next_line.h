/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 09:48:31 by flecouey          #+#    #+#             */
/*   Updated: 2018/03/31 19:28:38 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H

# define BUFF_SIZE 5

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		get_next_line(const int fd, char **line);

#endif
