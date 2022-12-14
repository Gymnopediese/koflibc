/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stracmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:17:57 by albaud            #+#    #+#             */
/*   Updated: 2022/07/19 14:45:35 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sources.h"

int	ft_stracmp(char **a, char **b)
{
	int	i;

	i = 0;
	while (a[i] && b[i] && ft_strcmp(a[i], b[i]) == 0)
		i++;
	if (a[i] == 0 && b[i] == 0)
		return (0);
	return (1);
}
