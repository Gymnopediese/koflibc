/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_less                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:47:17 by albaud            #+#    #+#             */
/*   Updated: 2022/11/06 18:07:04 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max_less(int *arr, int size, int less)
{
	int	max;

	max = -2147483648;
	while (--size >= 0)
	{
		if (arr[size] > max && arr[size] < less)
			max = arr[size];
	}
	return (max);
}