/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:45:16 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/22 09:44:23 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;

	if (!big && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && len--)
	{
		j = 0;
		while (*(big + j) == *(little + j)
			&& *(little + j) && j <= len)
		{
			if (!*(little + j + 1))
				return ((char *)big);
			j++;
		}
		big++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main () {
   const char haystack[20] = "";
   const char big[10] = "";
   char *ret;

   ret = strnstr(haystack, big, 5);
   printf("The substring is: %s\n", ret);

   ret = ft_strnstr(haystack, big, 5);
   printf("The substring is: %s\n", ret);
   return(0);
}
*/
