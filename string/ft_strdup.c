/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:37:13 by tate              #+#    #+#             */
/*   Updated: 2022/10/13 11:57:21 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = ft_strlen(src);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == 0)
		return (str);
	i = -1;
	while (++i < len)
		str[i] = src[i];
	str[i] = 0;
	return (str);
}
