/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_innit_filled_canvas.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:02:54 by albaud            #+#    #+#             */
/*   Updated: 2023/02/26 14:14:42 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../sources.h"

void	ft_fill(t_canvas *c, int x, int y, int col)
{
	if (ft_has_pixel(c, x, y) == col || x < 0 || x > c->x || y < 0 || y > c->y)
		return ;
	ft_put_pixel(c, x, y, col);
	ft_fill(c, x + 1, y + 0, col);
	ft_fill(c, x + 0, y + 1, col);
	ft_fill(c, x - 1, y + 0, col);
	ft_fill(c, x + 0, y - 1, col);
}

t_canvas	ft_draw_circle(t_canvas *c, int r, int color)
{
	double		d_x;
	double		p_r;
	double		f;

	f = (double)r;
	p_r = pow(f, 2);
	d_x = -f;
	while ((int)d_x < (int)r)
	{
		ft_put_pixel(c, d_x + c->x / 2,
			sqrtf(p_r - d_x * d_x) + c->x / 2, color);
		ft_put_pixel(c, d_x + c->x / 2,
			-sqrtf(p_r - d_x * d_x) + c->x / 2, color);
		d_x += 0.005;
	}
	ft_fill(c, c->x / 2, c->x / 2, color);
	return (*c);
}

t_canvas	ft_init_circle_canvas(void *mlx, int r, int color)
{
	t_canvas	cvs;
	double		d_x;
	double		p_r;
	double		f;

	cvs = ft_init_canvas(mlx, r * 2, r * 2);
	f = (double)r;
	p_r = pow(f, 2);
	d_x = -f;
	while ((int)d_x < (int)r)
	{
		ft_put_pixel(&cvs, d_x + r, sqrtf(p_r - d_x * d_x) + r, color);
		ft_put_pixel(&cvs, d_x + r, -sqrtf(p_r - d_x * d_x) + r, color);
		d_x += 0.01;
	}
	ft_fill(&cvs, r, r, color);
	return (cvs);
}

t_canvas	ft_init_filled_canvas(void *mlx, int x, int y, int color)
{
	t_canvas	cvs;
	int			yy;

	cvs = ft_init_canvas(mlx, x, y);
	while (--x >= 0)
	{
		yy = -1;
		while (++yy < y)
		{
			ft_put_pixel(&cvs, x, yy, color);
		}
	}
	return (cvs);
}
