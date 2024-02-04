/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:10:44 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/22 09:22:53 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
#include <stdio.h>
#include <string.h>
int main () {
   char str1[20];
   char str2[20];
   int result;
   strcpy(str1, "ghhhhhh");
   strcpy(str2, "ghh");

   result = strncmp(str1, str2, 4);

   if(result > 0) {
      printf("first unmatched character of str1 is greater than str2\n");
   } else if(result < 0) {
      printf("first unmatched character of str1 is less than str2\n");
   } else {
      printf("Both the strings str1 and str2 are equal\n");
   }

   result = ft_strncmp(str1, str2, 4);

   if(result > 0) {
      printf("first unmatched character of str1 is greater than str2\n");
   } else if(result < 0) {
      printf("first unmatched character of str1 is less than str2\n");
   } else {
      printf("Both the strings str1 and str2 are equal\n");
   }
   return 0;
}
*/
