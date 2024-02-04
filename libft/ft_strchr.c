/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:52:05 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/24 13:18:43 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	 char *s = "teste";
	 int c = 'e' + 256;
	 char *res1 = ft_strchr(s, c);
	 char *res2 = strchr(s, c);
	 printf("ft_strchr: %s\n", res1);
	 printf("strchr: %s\n", res2);

	 return (0);
}*/
