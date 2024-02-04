/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:56:10 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/13 09:33:57 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
 
int main()
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";
 
    puts("str1 before memcpy ");
    puts(str1);
 
    // Copies contents of str2 to str1
    memcpy(str1, str2, sizeof(str2));
 
    puts("\nstr1 after memcpy ");
    puts(str1);

    
    puts("\n ==================  ");
    puts("\n now my ft function: ");

    char str3[] = "Geeks";
    char str4[] = "Quiz";
 
    puts("str3 before memcpy ");
    puts(str3);
 
    // Copies contents of str2 to str1
    ft_memcpy(str3, str4, sizeof(str4));
 
    puts("\nstr1 after memcpy ");
    puts(str4);
    
    return 0;
}
*/