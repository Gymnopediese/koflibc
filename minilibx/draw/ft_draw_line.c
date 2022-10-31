/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:31:27 by albaud            #+#    #+#             */
/*   Updated: 2022/10/31 12:41:08 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sources.h"

// void	ft_draw_line(t_canvas *cvs, t_vector a, t_vector b, int color)
// {
// 	int dy, dx, incrE, incrNE, d,x,y;

// 	dx = b.x - a.x;
// 	dy = b.y - a.y;
// 	d = 2 * dy - dx;
// 	incrE = 2 * dy;
// 	incrNE = 2 * (dy - dx);
// 	x = a.x;
// 	y = a.y;
// 	ft_put_pixel(cvs, x, y, color);
// 	while (x < b.x)
// 	{
// 		if (d <= 0)
// 		{
// 			d += incrE;
// 			x++;
// 		}
// 		else
// 		{
// 			d += incrNE;
// 			x++;
// 			y++;
// 		}
// 		ft_put_pixel(cvs, x, y, color);
// 	}
// }

void	ft_draw_line(t_canvas *cvs, t_vector a, t_vector b, int color)
{
	t_vector	toadd;
	int			loop;

	if (ft_vector_eql(a, b))
		return ;
	toadd.y = -ft_bound(fabs(a.y - b.y) / fabs(a.x - b.x), 0, 1);
	toadd.x = -ft_bound(fabs(a.x - b.x) / fabs(a.y - b.y), 0, 1);
	loop = (int)ft_distance(a, b);
	if (toadd.y < toadd.x)
		loop = (int)fabs(a.y - b.y) + 2;
	else
		loop = (int)fabs(a.x - b.x) + 2;
	if (a.x - b.x < 0)
		toadd.x *= -1;
	if (a.y - b.y < 0)
		toadd.y *= -1;
	while (--loop > 0)
	{
		if (a.x < cvs->x && a.y < cvs->y && a.x >= 0 && a.y >= 0)
			ft_put_pixel(cvs, round(a.x), round(a.y), color);
		a = ft_add_to_vector(a, toadd.x, toadd.y, 0);
	}
}
