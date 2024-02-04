/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:10:36 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/22 11:52:46 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	l;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	s = 0;
	while (s1[s] && ft_strchr(set, s1[s]))
	{
		s++;
	}
	l = ft_strlen(s1 + s);
	while (ft_strchr(set, s1[s + l]))
	{
		l--;
	}
	res = ft_substr(s1, s, l + 1);
	if (!res)
		return (NULL);
	return (res);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strtrim("bijan", "bn"));
	printf("%s\n", ft_strtrim("FallaH", "Fall"));
	char * s = ft_strtrim("tripouille   xxx", " x");
	printf("%s\n", s);
	printf("%zu\n", ft_strlen(s));

	return 0;
}
*/
