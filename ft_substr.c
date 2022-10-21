/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:28:17 by lmedrano          #+#    #+#             */
/*   Updated: 2022/10/21 18:38:08 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	unsigned int	i;

	i = 0;
	str = malloc(sizeof(char*) * len + 1);
	if (!s)
		return (NULL);
	while (s[i])
	{
		if(i == start)
		{
			while (str[i])
			{
				str[i] = s[i];
				i++;
			}
		}
		i++;
	}
	return (str);
}
