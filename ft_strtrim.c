/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabr <ysabr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 07:47:40 by ysabr             #+#    #+#             */
/*   Updated: 2022/11/04 20:58:05 by ysabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_char_str(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
	set++;
	}
	return (0);
}

char	*ft_cpy(const char *s1, int i, int s1size)
{
	int		k;
	char	*ptr;

	ptr = malloc (s1size - i + 2);
	if (!ptr)
		return (NULL);
	k = 0;
	while (i <= s1size)
	{
		ptr[k] = s1[i];
		i++;
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		s1size;
	char		*ptr;

	i = 0;
	s1size = ft_strlen(s1) - 1;
	if (!*s1 || !*set)
		return (ft_strdup(s1));
	while (s1[i])
	{
		if (ft_char_str(set, s1[i]) == 0)
			break ;
		i++;
	}
	if (i >= s1size)
		return (ft_strdup("\0"));
	while (s1size)
	{
		if (ft_char_str(set, s1[s1size]) == 0)
			break ;
		s1size--;
	}
	ptr = ft_cpy(s1, i, s1size);
	return (ptr);
}
#include<stdio.h>
int	main()
{
	//char s[] = "hello world";
	printf("%s", ft_strtrim(NULL,"held"));
}