/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:53:29 by calvares          #+#    #+#             */
/*   Updated: 2025/10/24 19:47:25 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countleft(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

static size_t	countright(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(s1);
	if (len == 0)
		return (0);
	i = len - 1;
	while (1)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0' || i == 0)
			break ;
		i--;
	}
	return (i);
}

/**
 * @brief Removes the characters equal to set from the beggining 
 * and the end of the string s1.
 * 
 * This functions allocates the necessary memory for the returned
 * string.
 * 
 * @param s1 The string to be trimmed.
 * @param set The string containing the set of characters
 * to be removed.
 * @return The trimmed string or NULL if allocation fails.
 */
char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	first;
	size_t	last;
	size_t	i;
	char	*new_str;

	if (!s1)
		return (ft_strdup(""));
	first = countleft(s1, set);
	if (ft_strlen(s1) == 0)
		last = 0;
	else
		last = countright(s1, set);
	if (first > last)
		return (ft_strdup(""));
	new_str = malloc(sizeof(char) * (last - first + 1 + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (first <= last)
		new_str[i++] = s1[first++];
	new_str[i] = '\0';
	return (new_str);
}

/* int	main()
{
	char *trimmed;

    // 1 String vazia
    trimmed = ft_strtrim("", " ");
    printf("Test 1: '%s'\n", trimmed); // esperado: ''
    free(trimmed);

	// 2 Set vazio (nenhum caractere removido)
    trimmed = ft_strtrim("   hello   ", "");
    printf("Test 2: '%s'\n", trimmed); // esperado: '   hello   '
    free(trimmed);

    // 3 String inteira composta de caracteres do set
    trimmed = ft_strtrim("xxxxx", "x");
    printf("Test 3: '%s'\n", trimmed); // esperado: ''
    free(trimmed);

    // 4 String com um único caractere pertencente ao set
    trimmed = ft_strtrim("x", "x");
    printf("Test 4: '%s'\n", trimmed); // esperado: ''
    free(trimmed);
 
    // 5 String com um único caractere que não pertence ao set
    trimmed = ft_strtrim("a", "x");
    printf("Test 5: '%s'\n", trimmed); // esperado: 'a'
    free(trimmed); 
}  */