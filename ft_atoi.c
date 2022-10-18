/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:22:32 by lmedrano          #+#    #+#             */
/*   Updated: 2022/10/18 18:56:44 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int is_neg;
	long result;

	i = 0;
	is_neg = 1;
	result = 0;
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\n' || *str == '\v' ||
				*str == '\f' || *str == '\r' || *str == '\t')
			i++;
		while ((*str == '+') || (*str == '-'))
		{	
			if (*str == '-')
				is_neg *= -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			result = (*str - '0') + (result * 10);
			str++;
		}
		return (result * is_neg);
	}
	return (0);
}
