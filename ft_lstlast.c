/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielalvares <danielalvares@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 01:05:43 by danielalvar       #+#    #+#             */
/*   Updated: 2025/11/02 01:47:48 by danielalvar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last node of the list.
 * @param lst Pointer to the first node of the list.
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (!tmp)
		return (0);
	while (tmp)
	{
		if (tmp->next == NULL)
			return (tmp);
		tmp = tmp->next;
	}
	return(NULL);
}

/* int	main(void)
{
	t_list *node0 = ft_lstnew(", let's go");
	t_list *node1 = ft_lstnew(", ho");
	t_list *node2 = ft_lstnew("Hey");
	t_list *blitzkrieg_bop;

	blitzkrieg_bop = NULL;
	ft_lstadd_front(&blitzkrieg_bop, node0);
	ft_lstadd_front(&blitzkrieg_bop, node1);
	ft_lstadd_front(&blitzkrieg_bop, node2);

	printf("%s\n", (char *)ft_lstlast(blitzkrieg_bop)->content);
} */