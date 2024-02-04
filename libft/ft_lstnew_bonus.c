/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:16:56 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/22 12:09:18 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof (t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>

void ft_print_node(t_list *node)
{
    if (node == NULL)
        return;
    printf("%d\n", *(int *)node->content);


void ft_print_list(t_list *lst)
{
    if (lst == NULL)
        return;
    while (lst != NULL)
    {
        ft_print_node(lst);
        lst = lst->next;
    }
}


int main(void)
{
    t_list *lst;
    t_list *new;
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    lst = ft_lstnew(&a);
    lst->next = ft_lstnew(&b);
    lst->next->next = ft_lstnew(&c);
    printf("List before adding a new node:\n");
    ft_print_list(lst);
    new = ft_lstnew(&d);
    ft_lstadd_front(&lst, new);
    printf("List after adding a new node:\n");
    ft_print_list(lst);

    return 0;
}
*/
