/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:27:08 by calvares          #+#    #+#             */
/*   Updated: 2025/10/28 00:58:04 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_counter(const char *str, char sep)
{
	size_t	nwords;
	size_t	i;

	nwords = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != sep && str[i + 1] == sep)
			|| (str[i] != sep && str[i + 1] == '\0'))
			nwords++;
		i++;
	}
	return (nwords);
}

static size_t	*fst_char_finder(const char *str, char sep, size_t nwords)
{
	size_t	i;
	size_t	j;
	size_t	*start_i;

	start_i = malloc(sizeof(size_t) * nwords);
	if (!start_i)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if ((i == 0 && str[i] != sep)
			|| (i > 0 && str[i] != sep && str[i - 1] == sep))
		{
			start_i[j] = i;
			j++;
		}
		i++;
	}
	return (start_i);
}

static char	*word_dup(const char *str, size_t start_i, size_t end_i)
{
	size_t	j;
	char	*word;

	word = malloc(sizeof(char) * ((end_i - start_i) + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (start_i < end_i)
		word[j++] = str[start_i++];
	word[j] = '\0';
	return (word);
}

static char	
	**splitted(const char *str, char sep, size_t *start_i, char	**substr)
{
	size_t	i;
	size_t	end_i;
	size_t	nwords;

	nwords = words_counter(str, sep);
	i = 0;
	while (i < nwords)
	{
		end_i = start_i[i];
		while (str[end_i] && str[end_i] != sep)
			end_i++;
		substr[i] = word_dup(str, start_i[i], end_i);
		if (!substr[i])
		{
			while (i > 0)
				free(substr[--i]);
			free (substr);
			return (NULL);
		}
		i++;
	}
	substr[nwords] = NULL;
	free (start_i);
	return (substr);
}

char	**ft_split(const char *str, char sep)
{
	char	**substr;
	size_t	nwords;
	size_t	*start_i;

	nwords = words_counter(str, sep);
	start_i = fst_char_finder(str, sep, nwords);
	if (!start_i)
		return (NULL);
	substr = malloc(sizeof(char *) * (nwords + 1));
	if (!(substr))
		return (NULL);
	substr = splitted(str, sep, start_i, substr);
	if (!substr)
		return (NULL);
	return (substr);
}

/* int	main(void)
{
	char s[] = "To be, or not to be, that is the question.";
	char **var;

	var = ft_split(s, ' ');
	int i = 0;
	while (var[i])
	{
		printf ("%s\n", var[i]);
		i++;
	}
	return (0);
} */