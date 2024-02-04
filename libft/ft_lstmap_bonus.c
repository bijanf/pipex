/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:17:47 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/22 13:08:04 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem1;
	t_list	*elem2;

	if (!lst || !f || !del)
		return (NULL);
	elem1 = NULL;
	while (lst)
	{
		elem2 = ft_lstnew(f(lst->content));
		if (!elem2)
		{
			ft_lstclear(&elem2, del);
			return (NULL);
		}
		ft_lstadd_back(&elem1, elem2);
		lst = lst->next;
	}
	return (elem1);
}
