/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:41:54 by calvares          #+#    #+#             */
/*   Updated: 2025/10/23 17:39:55 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief size-bounded string concatenation
 * 
 * This function concatenates strings with the same input
 * and it's designed to be safer, more consistent and 
 * less error prone replacements.
 * 
 * Therefore, strlcat appends string src to the end of dst.
 * 
 * strlcat takes the full size of the destination buffer and
 * guarantee NUL-termination if there is room.
 * 
 * @return Returns the total lenght of the string it tried to
 * create. It means the initial length of dst plus the length
 * of src.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && i < (dstsize - 1 - dst_len))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/* 
int	main()
{
	char buffer[10] = "ABCDEFG";
	const char *to_add = "12345";
	size_t result;
	
	printf("Antes: buffer = \"%s\"\n", buffer);
	
	result = ft_strlcat(buffer, to_add, 12);

	printf("Depois: buffer = \"%s\"\n", buffer);
	printf("Retorno de ft_strlcat: %zu\n", result);
} */