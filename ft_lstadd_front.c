/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielalvares <danielalvares@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 23:11:47 by danielalvar       #+#    #+#             */
/*   Updated: 2025/11/02 15:20:41 by danielalvar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief set the node 'new' to the first element of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list *node0 = ft_lstnew(" let's go!");
	t_list *node1 = ft_lstnew(" ho,");
	t_list *node2 = ft_lstnew("Hey,");
	t_list *blitzkrieg_bop;

	blitzkrieg_bop = NULL;
	ft_lstadd_front(&blitzkrieg_bop, node0);
	ft_lstadd_front(&blitzkrieg_bop, node1);
	ft_lstadd_front(&blitzkrieg_bop, node2);

	while (blitzkrieg_bop != NULL)
	{
		printf("%s", (char *)blitzkrieg_bop->content);
		blitzkrieg_bop = blitzkrieg_bop->next;
	}
	printf("\n");
} */