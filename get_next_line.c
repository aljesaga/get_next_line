/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:34:57 by alsanche          #+#    #+#             */
/*   Updated: 2021/09/02 16:44:37 by alsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*str;
	static char	buf[BUFF_SIZE];
	char		*aux;

	read(fd, buf, BUFF_SIZE);
	str = ft_join(str, buf);
	aux = str;
	free(str);
	return (aux);
}
