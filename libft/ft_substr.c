/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:10:46 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/22 10:13:41 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	char	*tmp_ptr;

	if (s == NULL)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		len = 0;
	else if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	tmp = ft_calloc((len + 1), sizeof(char));
	if (!tmp)
		return (NULL);
	s += start;
	tmp_ptr = tmp;
	*(tmp + len) = '\0';
	while (len-- && *s)
		*tmp++ = *s++;
	return (tmp_ptr);
}
