/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_lignes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:48:49 by albaud            #+#    #+#             */
/*   Updated: 2022/11/02 23:21:47 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../sources.h"

char	**ft_read_lignes(char *filename)
{
	char	*file;
	char	**final;

	file = ft_read(filename);
	if (!file || !file[0])
		return (0);
	final = ft_split(file, '\n');
	free(file);
	return (final);
}
