/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielalvares <danielalvares@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 08:56:56 by danielalvar       #+#    #+#             */
/*   Updated: 2025/11/03 09:09:55 by danielalvar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Removes one element from the list.
 * Removes the node passed as a parameter.
 * Free the node itself, but does not free the next node.
 * 
 * @param lst The node to free.
 * @param del The address of the function used to delete
 * the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}