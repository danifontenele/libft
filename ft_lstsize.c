/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielalvares <danielalvares@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 00:36:00 by danielalvar       #+#    #+#             */
/*   Updated: 2025/11/02 01:11:35 by danielalvar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of nodes in a the list 'lst'.
 * @return Returns the length of the list.
 */
int	ft_lstsize(t_list *lst)
{
	int	counter;
	if (!lst)
		return (0);
	counter = 0;
	while (lst)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
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

	printf("size of the list: %d\n", ft_lstsize(blitzkrieg_bop));
	while (blitzkrieg_bop != NULL)
	{
		printf("%s", (char *)blitzkrieg_bop->content);
		blitzkrieg_bop = blitzkrieg_bop->next;
	}
} */