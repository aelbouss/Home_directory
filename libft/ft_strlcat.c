/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouss <aelbouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:15:57 by aelbouss          #+#    #+#             */
/*   Updated: 2024/11/02 17:55:40 by aelbouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_indx;
	size_t	totallen;

	if (!dst || !src)
		return (0);
	totallen = ft_strlen(dst) + ft_strlen(src);
	if (ft_strlen(dst) >= dstsize || dstsize == 0)
		return (totallen);
	i = ft_strlen(dst);
	src_indx = 0;
	while (i < dstsize - 1 && src[src_indx] != '\0')
	{
		dst[i++] = src[src_indx++];
	}
	dst[i] = '\0';
	return (totallen);
}
