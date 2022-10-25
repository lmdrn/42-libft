/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:20:44 by lmedrano          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/10/25 12:14:46 by lmedrano         ###   ########.fr       */
=======
/*   Updated: 2022/10/21 18:24:13 by lmedrano         ###   ########.fr       */
>>>>>>> 0240effb13c414100d9d73ffbb92d40942dc33be
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
<<<<<<< HEAD
	unsigned char	*memory;
	size_t le

	memory = malloc(sizeof(size) * count);
	while (memory)

=======
	char	*memory;
	size_t	i;
	size_t	len;

	i = 0;
	len = count * size;
	memory = malloc(len);
	if (!memory)
		return (NULL);
	while (i < len)
	{
		memory[i] = 0;
		i++;
	}
>>>>>>> 0240effb13c414100d9d73ffbb92d40942dc33be
	return (memory);
}
