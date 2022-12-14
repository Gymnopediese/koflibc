/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:47:17 by albaud            #+#    #+#             */
/*   Updated: 2022/07/19 14:44:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *arr, int size)
{
	int	max;

	max = -2147483648;
	while (--size >= 0)
	{
		if (arr[size] > max)
			max = arr[size];
	}
	return (max);
}
