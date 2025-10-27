/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:04:38 by calvares          #+#    #+#             */
/*   Updated: 2025/10/26 21:32:41 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the number of characters needed to represent
 * the number passed as parameter.
 */
static int	intlen(long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		count++;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}

static char	*allocation(int len)
{
	char	*tmp;

	tmp = malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	return (tmp);
}

/**
 * @brief Converts integer to ASCII.
 * 
 * Allocates memory and returns a string representing the
 * integer received as an argument. Negative numbers must
 * be handled.
 * 
 * @param n The integer to convert.
 * @return The string representing the integer. NULL if 
 * the allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	nbr;
	int		i;

	nbr = n;
	len = intlen(nbr);
	result = allocation(len);
	if (!result)
		return (NULL);
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	i = len - 1;
	if (nbr == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		result[i--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	result[len] = '\0';
	return (result);
}
/* 
int	main(void)
{
	char *str = ft_itoa(0);
	printf("42: %s\n", str);
	free (str);
} */