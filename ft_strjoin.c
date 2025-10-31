/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:54:17 by calvares          #+#    #+#             */
/*   Updated: 2025/10/30 16:27:43 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new_str;
	size_t	sum_length;

	if (!s1 || !s2)
		return (NULL);
	sum_length = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc((sizeof(char) * sum_length) + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, sum_length + 1);
	ft_strlcat(new_str, s2, sum_length + 1);
	return (new_str);
}
