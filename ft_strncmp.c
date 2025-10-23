/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:53:17 by calvares          #+#    #+#             */
/*   Updated: 2025/10/22 21:44:40 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compare strings
 * 
 * Function compares two strings but considering only n
 * characters.
 * 
 * @param n Function compares not more than n characters. 
 * @return Returns an integer greater than, equal 
 * to or less than 0. According to this result is
 * possible to check if s1 is greater than, equal to
 * or less than s2.
 * 
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ts1;
	unsigned char	*ts2;

	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	i = 0;
	while (ts1[i] && ts2[i] && i < n)
	{
		if (ts1[i] != ts2[i])
			return (ts1[i] - ts2[i]);
		i++;
	}
	if (i < n)
	{
		if (s1[i] != ts2[i])
			return (ts1[i] - ts2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	const char *s1 = "test\0";
	const char *s2 = "test\200";
	int	result;
	
	result = ft_strncmp(s1, s2, 7);
	if (result > 0)
		printf("s1 is greater than s2\n");
	if (result == 0)
		printf("s1 is equal s2\n");
	if (result < 0)
		printf("s1 is smaller than s2\n");
}*/