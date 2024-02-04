/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:37:17 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/27 14:09:30 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
/*
#include <stdio.h>


// A helper function that prints an array of strings
void print_array(char **arr)
{
    int i = 0;
    while (arr[i])
    {
        printf("%s\n", arr[i]);
        i++;
    }
}

// A function that tests the ft_split function with different inputs
void test_ft_split()
{
    char *s1 = "Hello world!";
    char *s2 = "  Hello   world!  ";
    char *s3 = "Hello";
    char *s4 = "";
    char *s5 = "   ";
    char *s6 = "Hello,world,how,are,you?";
    char c1 = ' ';
    char c2 = ',';

    printf("Testing ft_split with s1 = \"%s\" and c1 = '%c'\n", s1, c1);
    print_array(ft_split(s1, c1));
    printf("\n");

    printf("Testing ft_split with s2 = \"%s\" and c1 = '%c'\n", s2, c1);
    print_array(ft_split(s2, c1));
    printf("\n");

    printf("Testing ft_split with s3 = \"%s\" and c1 = '%c'\n", s3, c1);
    print_array(ft_split(s3, c1));
    printf("\n");

    printf("Testing ft_split with s4 = \"%s\" and c1 = '%c'\n", s4, c1);
    print_array(ft_split(s4, c1));
    printf("\n");

    printf("Testing ft_split with s5 = \"%s\" and c1 = '%c'\n", s5, c1);
    print_array(ft_split(s5, c1));
    printf("\n");

    printf("Testing ft_split with s6 = \"%s\" and c2 = '%c'\n", s6, c2);
    print_array(ft_split(s6, c2));
    printf("\n");
}

// The main function that runs the test function
int main()
{
    test_ft_split();
    return 0;
}
*/
