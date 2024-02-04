/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:51:19 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/16 13:32:20 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy( char *dst, const char *src, size_t size)
{
	size_t	src_l;

	src_l = ft_strlen(src);
	if (src_l + 1 < size)
	{
		ft_memcpy(dst, src, src_l + 1);
	}
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (src_l);
}
/*
#include <stdio.h>
#include <stdlib.h>


int main() {
	char *src = malloc(10);
	char *dst = malloc(10);
	ft_strlcpy(src, "Hello", 10);
	printf("Source string before ft_strlcpy: %s\n", src);
	size_t len1 = ft_strlcpy(dst, src, 5);
	size_t len2 = ft_strlcpy(dst, src, 10);
	printf("Destination string after ft_strlcpy with size 5: %s\n", dst);
	printf("Return value after ft_strlcpy with size 5: %zu\n", len1);
	printf("Destination string after ft_strlcpy with size 10: %s\n", dst);
	printf("Return value after ft_strlcpy with size 10: %zu\n", len2);
	free(src);
	free(dst);
	return 0;
}
*/
