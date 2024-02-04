/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:19:19 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/18 11:56:07 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>

// A custom function that changes the case of the characters
void ft_change_case(unsigned int i, char *c)
{
    (void)i;
	if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
    else if (*c >= 'A' && *c <= 'Z')
        *c = *c + 32;

}

// A custom function that adds an offset to the characters
void ft_add_offset(unsigned int i, char *c)
{
    *c = *c + i;
}

int main(void)
{
    char s1[] = "Hello World!";
    char s2[] = "This is a test.";
    char s3[] = "erffffffffffff1234567890";

    // Test the ft_striteri function with different inputs and functions
    ft_striteri(s1, ft_change_case);
    ft_striteri(s2, ft_add_offset);
    ft_striteri(s3, ft_change_case);

    // Print the results
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("s3: %s\n", s3);

    return 0;
}
*/
