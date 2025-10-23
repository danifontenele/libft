/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:55:03 by calvares          #+#    #+#             */
/*   Updated: 2025/10/21 21:48:14 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief fill a byte string with a byte value.
 * 
 * the ft_memset() can be used to set a whole block
 * of memory to a particular value.
 * 
 * @param b Address of the string that receives the
 * second argument.
 * @param c Bytes to be writen in b.
 * @param len Number of bytes to be considered.
 * 
 * @return Returns its first argument
 */
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

/*int	main(void)
{
	char buffer[10];
	int	i;

	ft_memset(buffer, 'a', sizeof(char) * 5);
	ft_memset(buffer + 5, 'b', sizeof(char) * 5);
	
	i = 0;
	while (i < 10)
	{
		printf("%c\n", buffer[i]);
		i++;
	}
}
*/