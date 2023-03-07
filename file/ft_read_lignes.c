/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_lignes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:48:49 by albaud            #+#    #+#             */
/*   Updated: 2023/02/13 22:48:29 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../sources.h"

char	**ft_read_lignes(char *filename)
{
	char	*file;
	char	**final;

	ft_putendl("rip");
	file = ft_read(filename);
	ft_putendl("rip");
	if (!file || !file[0])
		return (0);
	final = ft_split(file, '\n');
	free(file);
	return (final);
}
