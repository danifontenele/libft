/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:07:18 by calvares          #+#    #+#             */
/*   Updated: 2025/10/30 16:26:28 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*t_src;
	unsigned char		*t_dst;

	if (!src && !dst)
		return (NULL);
	t_src = (const unsigned char *)src;
	t_dst = (unsigned char *)dst;
	if (t_dst > t_src)
	{
		while (len--)
		{
			t_dst[len] = t_src[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			t_dst[i] = t_src[i];
			i++;
		}
	}
	return (dst);
}
