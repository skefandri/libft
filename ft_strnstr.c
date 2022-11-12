/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabr <ysabr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:20:49 by ysabr             #+#    #+#             */
/*   Updated: 2022/11/04 09:24:36 by ysabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	if (haystack[i] == '\0')
		return (NULL);
	while (i < len && haystack[i])
	{
		j = 0;
		while ((i + j) < len && haystack[i]
			&& needle[j] && haystack[i + j] == needle[j])
		{
			if (!needle[j + 1])
				return (((char *)haystack) + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
