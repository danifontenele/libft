/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielalvares <danielalvares@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 23:11:47 by danielalvar       #+#    #+#             */
/*   Updated: 2025/11/02 00:37:32 by danielalvar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief set the node 'new' to the first element of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new) // **lst pointer to the content of the first element of the list.
{
	if (!lst || !new)
		return ;
	new->next = *lst; // O campo next passa a apontar para o antigo primeiro elemento da lista.
	*lst = new; // Aqui lista o começo da lista recebe o novo primeiro elemento, apontado por new.
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