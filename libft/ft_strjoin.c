/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:15:55 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/22 10:26:05 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	char	*joint_ptr;

	if (!s1 || !s2)
		return (NULL);
	joint = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!joint)
		return (NULL);
	joint_ptr = joint;
	while (*s1)
	{
		*joint = *s1;
		s1++;
		joint++;
	}
	while (*s2)
	{
		*joint = *s2;
		s2++;
		joint++;
	}
	*joint = '\0';
	return (joint_ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int main()
{
	char *s;

	s = ft_strjoin("", "");
	printf("joined: %s\n", s);
	free(s);

	s = ft_strjoin(
		"----------------------------------------",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
	printf("joined: %s\n", s);
	free(s);

	return 0;
}
*/
