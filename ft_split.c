/* ************************************************************************** */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:41:45 by lmedrano          #+#    #+#             */
/*   Updated: 2022/10/29 13:13:46 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	int	i;
	int word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
					i++;
			word++;
		}
		while (s[i] == c)
			i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		count;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (j < (ft_word_count(s, c)))
	{
		count = 0;
		while (s[i] == c)
				i++;
		while (s[i] != c && s[i] != '\0')
		{
			count++;
			i++;
		}
		tab[j] = malloc(sizeof(char) * (count + 1));
		if (tab[j] == NULL)
		{
			while (j >= 0)
			{
				free(tab[--j]);
			}
			free(tab);
			return (NULL);
		}
		i -= count;
		k = 0;	
		while (s[i] != c && s[i] != '\0')
			tab[j][k++] = s[i++];
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
/*
#include <stdio.h>
int main (void)
{
	char	str[] = " Hello Lea";
	char	**tab = ft_split(str, ' ');
	int		i;

	i = 0;
	printf("%d\n", ft_word_count(str, ' '));
	while (i < ft_word_count(str, ' '))
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
*/
