/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:16:22 by calvares          #+#    #+#             */
/*   Updated: 2025/10/30 23:40:36 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	word_count(const char *str, char sep)
{
	size_t	wcounter;
	size_t	i;

	wcounter = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != sep && str[i + 1] == sep)
			|| (str[i] != sep && str[i + 1] == '\0'))
			wcounter++;
		i++;
	}
	return (wcounter);
}

static	size_t	word_len(const char *str, char sep)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == sep)
			i++;
		len++;
		i++;
	}
	return (len);
}

static char	**word_dup(const char *str, char sep, char **substr)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	i = 0;
	k = 0;
	while (str[i])
	{
		if ((i == 0 && str[i] != sep)
			|| (i > 0 && str[i] != sep && str[i - 1] == sep))
			j = i;
		while (str[j] != sep && str[j] != '\0')
		{
			if (str[j + 1] == sep || str[j + 1] == '\0')
			{
				substr[k] = ft_substr(str, i, (j - i) + 1);
				k++;
			}
			j++;
		}
		i++;
	}
	substr[k] = NULL;
	return (substr);
}

char	**ft_split(const char *str, char sep)
{
	size_t	nwords;
	size_t	wordslen;
	char	**substr;

	nwords = word_count(str, sep);
	wordslen = word_len(str, sep);
	substr = malloc(sizeof(char *) * (nwords + 1));
	if (!substr)
		return (NULL);
	substr = word_dup(str, sep, substr);
	return (substr);
}

/* int	main(int ac, char **av)
{
	char	**splitted;
	char	sep = (char) * av[2];
	char	*str = av[1];

	splitted = ft_split(str, sep);
	int	i = 0;
	while (i < word_count(str, sep))
	{
		printf("%s\n", splitted[i]);
		i++;
	}
	printf("number of words: %lu\n", word_count(str, sep));
	free (!splitted);
	return (0);
} */