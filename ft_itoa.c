/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 07:12:05 by lmedrano          #+#    #+#             */
/*   Updated: 2022/10/26 14:06:41 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrcount(int n)
{
	int		len;
	long int	temp;

	len = 0;
	temp = (long)n;
	if (n < 0)
	{
		len++;
		len = -temp;
	}

	if (temp == 0)
		len++;
	while (temp > 0)
		len++;
		temp /= 10;
	return(len);
}

char	*ft_itoa(int n)
{
	char		*res;
	int		len;
	long int	temp;

	len = ft_nbrcount(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	temp = (long)n;
	if (res == NULL || len == 0)
		return (NULL);
	res[len] = '\0';
	if (temp < 0)
	{
		res[0] = '-';
		temp = -temp;	
	}
	else if (temp == 0)
		res[len - 1] = '0';
	while (temp > 0)
	{
		res[len - 1] = (temp % 10) + '0';
		temp /= 10;
		len--;
	}
	return (res);
	
}
