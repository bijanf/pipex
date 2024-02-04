/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:13:44 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/22 09:31:16 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dest_l;
	size_t		tot_l;
	const char	*s;

	if ((!dst || !src) && !size)
		return (0);
	s = src;
	dest_l = 0;
	while (*(dst + dest_l) && dest_l < size)
		dest_l++;
	if (dest_l < size)
		tot_l = dest_l + ft_strlen(s);
	else
		return (size + ft_strlen(s));
	while (*s && (dest_l + 1) < size)
	{
		*(dst + dest_l) = *s++;
		dest_l++;
	}
	*(dst + dest_l) = '\0';
	return (tot_l);
}
/*
#include <stdio.h>
#include <stdlib.h>


int main() {
	char *dst = malloc(10);
	if (dst == NULL)
	{
		perror("malloc failed");
		 exit(1);
	}
	char *src = malloc(10);
	if (src == NULL)
	{
		perror("malloc failed");
		 exit(1);
	}

	ft_strlcpy(dst, "Hello", 10);

	ft_strlcpy(src, "World", 10);

	printf("Destination string before ft_strlcat: %s\n", dst);
	printf("Source string before ft_strlcat: %s\n", src);


	size_t len1 = ft_strlcat(dst, src, 5);
	size_t len2 = ft_strlcat(dst, src, 10);
	printf("Destination string after ft_strlcat with size 5: %s\n", dst);
	printf("Return value after ft_strlcat with size 5: %zu\n", len1);
	printf("Destination string after ft_strlcat with size 10: %s\n", dst);
	printf("Return value after ft_strlcat with size 10: %zu\n", len2);
	free(dst);
	free(src);
	return 0;
}
*/
