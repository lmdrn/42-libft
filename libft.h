/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:07:49 by lmedrano          #+#    #+#             */
/*   Updated: 2022/10/17 16:40:06 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
void	*ft_memmove(void *dst, const void *src, size_t nbytes);
void	*ft_memcpy(void *dst, const void *src, size_t nbytes);
void	*ft_memchr(const void *s, int c, size_t nbytes);
size_t	ft_strlen(const char *s);
int	ft_isascii(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
