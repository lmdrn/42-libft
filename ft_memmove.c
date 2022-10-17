/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:52:00 by lmedrano          #+#    #+#             */
/*   Updated: 2022/10/17 13:51:29 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t nbytes)
{
          size_t  i;
          unsigned char *n_dst;
	  const char *n_src;

	  i = 0;
          n_dst = dst;
          n_src = src;
          if (!dst && !src)
                  return (0);
          if ((size_t)dst - (size_t)src < nbytes)
          {
                  while (nbytes > 0)
                  {
                          n_dst[nbytes - 1] = n_src[nbytes - 1];
                          nbytes--;
                  }
          }
          else
          {
                  while (i < nbytes)
                  {
                          n_dst[i] = n_src[i];
                          i++;
                  }
          }
 
          return (dst);
}
