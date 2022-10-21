/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:18:46 by lmedrano          #+#    #+#             */
/*   Updated: 2022/10/21 12:51:18 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t i;
	size_t j;
	char *res;

	i = 0;
	j = 0;
	if (!n)
		return ((char *)h);
	while (h[i] != '\0' && (len > 0))
	{
		j = 0;
		if (n[j] == h[i])
		{
			res = (char *)h;
			while ((n[j] != '\0') && (n[j] == h[i]))
				j++;
		}
		i++;
		len--;
	}
	return (res);
}
