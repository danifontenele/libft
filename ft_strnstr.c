/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:44:53 by calvares          #+#    #+#             */
/*   Updated: 2025/10/22 23:16:15 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the 1st occurence of a string in another bigger string.
 * 
 * ft_strnstr() just search the needle string until len characters of the
 * bigger string and no more than that.
 * 
 * @return NULL if there's no needle in haystack, Haystack if needle is NULL,
 * pointer to the first character of first occurence of needle.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*char_haystack;

	char_haystack = (char *)haystack;
	if (needle[0] == '\0')
		return (char_haystack);
	i = 0;
	while (char_haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && char_haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return (&char_haystack[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char haystack[] = "This is the way.";
	char needle[] = "the";

	char *the = ft_strnstr(haystack, needle, 11);

	printf("the: %s\n", the);
	char *to_find = ft_strnstr("hello", "lo", 2);
	printf("%s\n", to_find);
} */