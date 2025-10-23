/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:52:21 by calvasub          #+#    #+#             */
/*   Updated: 2025/10/23 16:33:42 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Extract a substring from a string.
 * 
 * Allocasub memory and returns a substring 's'.
 * The substring starts at index 'start' and has
 * a maximum length of 'len'.
 * 
 * @param s The original string from which to create
 * the substring.
 * @param start The starting index of the substring
 * whithin 's'.
 * @param len The maximum length of the substring.
 * @return The substring or NULL if the allocation fails.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	sub = (char *)malloc(sizeof(s) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

/* int	main(void)
{
	char	*str = "This is just a test string Dont Panic!";
	char	*sub;

	sub = ft_substr(str, 27, 11);
	printf("substring: \"%s\"\n", sub);
	printf("%s\n", ft_substr("Bonjour comment ca va?", 5, 8));
} */