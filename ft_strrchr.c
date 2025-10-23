/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:44:08 by calvares          #+#    #+#             */
/*   Updated: 2025/10/23 00:18:24 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * @brief This function returns a pointer to the last occurrence of 
 * the character c in the string s.
 * 
 * @return A pointer to the matched character or NULL if the character
 * is not found. The '\0' character is considered, so if c is '\0'
 * the funcion returns a pointer to the terminator.
 */
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

/* int main(void)
{
	char tweet[] = "@This is my @mention";

	char *mention = ft_strrchr(tweet, '@');
	printf("%s\n", mention);
	
	printf("\nmemory address:\n");
	printf("%p\n", mention);
	printf("%p\n", tweet + 12);
	return (0);
} */