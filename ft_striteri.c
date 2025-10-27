/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:17:21 by calvares          #+#    #+#             */
/*   Updated: 2025/10/26 20:54:07 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function f to each character of the string s
 * passed as argument.
 * @param s String to apply the function throught.
 * @param f Function to apply. Its first argument represents 
 * the index of the string and the second argument represents 
 * the character itself.
 * 
 * The difference between ft_striteri and ft_strmapi is in the fact
 * this one opperates the string s straightly, with no need of a 
 * new string and also that's why this one doesn't return another 
 * string.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
