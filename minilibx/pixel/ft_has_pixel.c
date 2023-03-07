/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:00:27 by albaud            #+#    #+#             */
/*   Updated: 2023/02/26 13:42:58 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sources.h"

long int	ft_has_pixel(t_canvas *cvs, int x, int y)
{
	char		*pix;
	long int	col;

	pix = ft_get_pixel(cvs, x, y);
	col = 0;
	if (pix[2] == -1)
		col = 255;
	else
		col = pix[2];
	if (pix[1] == -1)
		col = (col << 8) + 255;
	else
		col = (col << 8) + (((int)pix[1]));
	if (pix[0] == -1)
		col = (col << 8) + 255;
	else
		col = (col << 8) + (((int)pix[0]));
	return (col);
}
