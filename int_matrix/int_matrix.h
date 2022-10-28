/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_matrix.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:49:02 by albaud            #+#    #+#             */
/*   Updated: 2022/08/01 18:44:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_MATRIX_H
# define INT_MATRIX_H

t_matrix	ft_atoim(char **str, char split);
t_matrix	ft_init_intm(int x, int y, int val);
void		ft_reset_intm(t_matrix map, int val);
#endif
