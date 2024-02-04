/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:21:49 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/16 13:42:24 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*mem;
	int		i;

	mem = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!mem)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		mem[i] = s[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "qerkjhewv354ev35e4v ervlkhwelvhk ewev";
    char* target = strdup(source);

    printf("%s\n", target);

	char* target_ft = ft_strdup(source);

    printf("%s\n", target_ft);
    return 0;
}
*/
