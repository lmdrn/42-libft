/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:41:45 by lmedrano          #+#    #+#             */
/*   Updated: 2022/10/28 14:56:02 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return(i);
}

int	ft_how_many_sep(char const *s, char c)
{
	int 	i;
	int	flag;

	i = 0;
	flag = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			flag++;
		i++;
	}
	return (flag);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int 	sep_count;
	int 	i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	k = 0;
	sep_count = ft_how_many_sep(s, c);
	len = ft_strlen(s);
	tab = malloc(sizeof(*tab) * (len + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		tab[j] = malloc(sizeof(*tab[j]) * (len + 1));
		k = 0;
		while (s[i] != c)
		{
			tab[j][k++] = s[i++];
		}
		j++;
		i++;
	}
	return (tab);
}

int main (void)
{
	printf("%s", ft_split("hello lea", ' ')[0]);
	printf("\n");
	printf("%s", ft_split("hello lea", ' ')[1]);
}
