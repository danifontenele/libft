/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielalvares <danielalvares@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 21:29:54 by danielalvar       #+#    #+#             */
/*   Updated: 2025/11/02 00:00:43 by danielalvar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function creates a node containing a content of any type.
 * 
 * This node contains 2 parts, one represents it's content, it can be by any type
 * the other part is a pointer to the next node, initialy NULL, but can be linked
 * using other functions.
 * 
 * @return Returns a pointer to the new node.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;
	
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
