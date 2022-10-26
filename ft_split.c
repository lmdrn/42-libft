/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:41:45 by lmedrano          #+#    #+#             */
/*   Updated: 2022/10/26 19:15:23 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_how_many_sep(char const *s, char c)
{
	int 	i;
	int	flag;

	i = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			flag++;
		i++;
	}
	return (flag);
}

int	ft_array_elem_count(char const *s, int sep_count)
{
	int	elem_count;

	elem_count = (ft_strlen(s) - sep_count);
	return (elem_count);
}

char	**ft_split(char const *s, char c)
{
	int	len;
	int 	sep_count;
	int 	i;
	int	j;
	char	**tab;

	i = 0;
	j = 0;
	sep_count = ft_how_many_sep(s, c);
	len = ft_array_elem_count(s, sep_count);
	tab = malloc(sizeof(char) * (len + 1));
	if (*tab == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		else
			tab[j][i] = s[i];
		i++;
	}
	return (tab);
}


// check cmb de separators
// check how many element in array
// allocate new str with length of array - separators
// iterate on s and populate new str with each elem of the array
// Careful it's two dimensions....

