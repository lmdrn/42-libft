/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:47:38 by lmedrano          #+#    #+#             */
/*   Updated: 2022/10/25 18:19:07 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	count;
	int		i;
	int		j;

	i = 0;
	count = ft_strlen(s1) - ft_strlen(set);
	if (count >= ft_strlen(s1))
		count = 0;
	str = malloc(count + 1);
	if (str == NULL)
		return (NULL);
		j = 0;
	while (ft_strncmp(s1, set, count) == 0)
	{	
		str[i++] = ((char *)s1)[j++];
		i++;
	}
	str[i] = '\0';
	return (str);
}
