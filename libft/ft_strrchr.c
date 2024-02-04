/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:44:51 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/22 09:17:52 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = NULL;
	while (*s)
	{
		if (*s == (char)c)
			str = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)str);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	 char *s = "krklrhvrvro\t";
	 int c = 'o';
	 char *res1 = ft_strrchr(s, c);
	 char *res2 = strrchr(s, c);
	 printf("ft_strrchr: %s\n", res1);
	 printf("strrchr: %s\n", res2);
	 return (0);
}
*/
