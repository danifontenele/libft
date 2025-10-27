/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:27:08 by calvares          #+#    #+#             */
/*   Updated: 2025/10/27 00:11:27 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	words_counter(const char *str, char sep)
{
	size_t	nsep;
	size_t	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == sep)
			nsep++;
		i++;
	}
	return (nsep + 1);
}

char	**ft_split(const char *str, char sep)
{
	//1) Contar quantas substrings existirao
	//2) Funcao que encontr o inicio de uma palavra, logo apos o delimitador
	char	**substr;
	size_t	i;
	size_t	j;
	size_t	nwords;
	char	*start;
	char	*end;

	nwords = words_counter(str, sep);
	i = 0;
	j = 0;
	while (str)
	{
		if (str[i] == sep)
		{	
			end[j] = &(sep)- 1;
			start[j] = &(sep) + 1;
			j++;
		}
		i++;
	}
	while ()
}

int	main(void)
{
	char s[] = "To be, or not to be, that is the question.";

	return (0);
}