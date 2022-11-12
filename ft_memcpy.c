/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabr <ysabr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:27:16 by ysabr             #+#    #+#             */
/*   Updated: 2022/11/06 18:20:50 by ysabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	if (dst == src)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)d);
}
int	main()
{
	int s[] = {1, 2, 3, 4};
	int ss[] = {2, 2, 2, 2};
	int i;
	i = 0;
	ft_memcpy(s, ss, 16);
	while(i < 4)
		printf("%d", s[i++]);
}