/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabr <ysabr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:18:55 by ysabr             #+#    #+#             */
/*   Updated: 2022/11/03 23:16:50 by ysabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;
	size_t	size_s;
	size_t	size_d;

	y = 0;
	size_s = 0;
	size_d = 0;
	while (src[size_s])
		size_s++;
	if (dstsize == 0)
		return (size_s);
	while (dest[size_d])
		size_d++;
	i = size_d;
	if (size_d >= dstsize)
		return (dstsize + size_s);
	while (src[y] && i < (dstsize - 1))
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (size_d + size_s);
}
