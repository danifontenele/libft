/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:55:03 by calvares          #+#    #+#             */
/*   Updated: 2025/10/30 16:26:38 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	tempc;

	tempc = (unsigned char)c;
	dest = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		dest[i] = tempc;
		i++;
	}
	return (dest);
}
