/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielalvares <danielalvares@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 01:03:57 by danielalvar       #+#    #+#             */
/*   Updated: 2025/11/02 01:55:46 by danielalvar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL) // Caso seja uma lista vazia, adiciona-se o primeiro.
		*lst = new;
	else
		ft_lstlast(*lst)->next = new; // O ultimo no da lista agora recebe o endereço do novo no.
}

/* int	main(void)
{
	t_list	*A = ft_lstnew("first node, ");
	t_list	*B = ft_lstnew("second node.");
	t_list	*list;

	list = NULL;
	ft_lstadd_back(&list, A);
	ft_lstadd_back(&list, B);

	while (list)
	{
		printf("%s", (char *)list->content);
		list = list->next;
	}
	printf("\n");
} */