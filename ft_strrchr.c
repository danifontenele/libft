/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:44:08 by calvares          #+#    #+#             */
/*   Updated: 2025/10/30 16:28:37 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*str;
	unsigned char	chr;
	char			*last;

	str = (char *)s;
	chr = (unsigned char)c;
	last = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == chr)
			last = &str[i];
		i++;
	}
	if (chr == '\0')
		return (&str[i]);
	return (last);
}
