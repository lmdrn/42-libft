/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:14:16 by lmedrano          #+#    #+#             */
/*   Updated: 2022/10/18 11:36:09 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
         char *str = NULL;
         int i;
         i = 0;
         str = b;
         while (len)
        {
                 str[i] = c;
                 str++;
                 len--;
         }
         return (b);
 }
