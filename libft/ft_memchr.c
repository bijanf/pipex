/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:14:10 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/22 08:52:25 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *str, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)str++ == (unsigned char)c)
			return ((void *)(unsigned char *)str - 1);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
  char s[] = {-128, 0, 127, 0};
  char sCpy[] = {-128, 0, 127, 0};
  char s2[] = {0, 0, 127, 0};
  char s3[] = {0, 0, 42, 0};
  char *pch;

  pch = memchr (s, -128, 4);
  if (pch!=NULL)
    printf ("'p' found at position %s.\n", pch);
  else
    printf ("'p' not found.\n");

  pch = ft_memchr (s, -128, 4);
  if (pch!=NULL)
    printf ("'p' found at position %s.\n", pch);
  else
    printf ("'p' not found.\n");

   const char str1[] = "https://www.42bijan.com";
   const char ch = '.';
   char *ret1;
   char *ret2;


   ret1 = memchr(str1, ch, strlen(str1));

   printf("String after |%c| is - |%s|\n", ch, ret1);
   ret2 = ft_memchr(str1, ch, strlen(str1));
   printf("String after |%c| is - |%s|\n", ch, ret2);

   return(0);

  return 0;
}
*/
