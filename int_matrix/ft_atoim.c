/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:49:36 by albaud            #+#    #+#             */
/*   Updated: 2022/10/31 19:48:20 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../sources.h"

t_matrix	ft_atoim(char **str, char split)
{
	t_matrix	res;
	int			k;

	res.map = allok(ft_strtablen(str), sizeof(int *), EXITONNULL);
	if (res.map == 0)
		return (res);
	k = -1;
	while (str[++k])
		res.map[k] = ft_atoia(str[k], split, &res.size.x);
	res.size.y = k;
	return (res);
}
