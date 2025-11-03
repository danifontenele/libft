/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielalvares <danielalvares@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:44:08 by calvares          #+#    #+#             */
/*   Updated: 2025/11/03 08:37:19 by danielalvar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	chr;

	last = NULL;
	chr = (unsigned char)c;
	while (*s)
	{
		if (*s == chr)
			last = (char *)s;
		s++;
	}
	if (chr == '\0')
		return ((char *)s);
	return (last);
}
