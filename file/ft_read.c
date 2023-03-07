/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 09:58:37 by albaud            #+#    #+#             */
/*   Updated: 2023/02/13 23:42:49 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../sources.h"

char	*ft_read(char *file_name)
{
	int		size;
	char	*buffer;
	int		fd;
	char	tuffer[1000000];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(1);
	size = read(fd, tuffer, 999999);
	int count = 0;
	while (size > 0)
	{
		ft_putnbrn(count++);
		tuffer[size] = 0;
		buffer = ft_strjoin(buffer, tuffer);
		if (buffer == 0)
			return (0);
		size = read(fd, tuffer, 999999);
	}
	close(fd);
	return (buffer);
}
