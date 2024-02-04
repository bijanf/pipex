/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:26:35 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/14 21:48:56 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	c = (char *)s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *str = malloc(90);
	if (str == NULL)
	{
		perror("malloc failed");
		exit(1);
	}
	strcpy(str, "lfkdhfeelkrhölwehkgölkehrgreg");
	printf("Before bzero: %s\n", str);
	bzero(str, 1);
	printf("After bzero: %s\n", str);
	strcpy(str, "lfkdhfeelkrhölwehkgölkehrgreg");
	printf("Before bzero: %s\n", str);
	ft_bzero(str, 1);
	printf("After bzero: %s\n", str);
	free(str);
	return 0;

}
*/
