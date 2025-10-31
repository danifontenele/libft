/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:44:53 by calvares          #+#    #+#             */
/*   Updated: 2025/10/30 16:28:22 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*char_haystack;

	char_haystack = (char *)haystack;
	if (needle[0] == '\0')
		return (char_haystack);
	i = 0;
	while (char_haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && char_haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return (&char_haystack[i]);
		i++;
	}
	return (NULL);
}
