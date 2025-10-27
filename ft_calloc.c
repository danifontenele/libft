/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 01:22:04 by calvares          #+#    #+#             */
/*   Updated: 2025/10/26 20:52:05 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The calloc function allocates memory.
 * 
 * The allocated memory is aligned such that it 
 * can be used for any data type.
 *
 * The calloc function contigously allocates enought
 * space for count objects that are size bytes of memory
 * and returns a pointer to the allocated memory.
 * 
 * The allocated memory is filled with bytes with value zero.
 * @param count quantity of bytes needed in the specific case.
 * @param size size of the type.
 * @return If successful, calloc() returns a pointer to the 
 * allocated memory. If there's an error, they return a NULL
 * pointer and set errno to ENOMEN.
 */
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/* 
int	main(void)
{
	int *arr;
	size_t n = 10;
	size_t i; 

	arr = ft_calloc(n, sizeof(int));

	if (!arr)
	{
		printf("Falha na alocacao\n");
		return (1);
	}
	i = 0;
	while (i < 10)
	{
		printf("arr[%zu]: %d\n", i, arr[i]);
		i++;
	}
	free (arr);
	return (0);
}  */