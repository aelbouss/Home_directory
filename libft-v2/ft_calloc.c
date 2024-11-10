/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouss <aelbouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:20:45 by aelbouss          #+#    #+#             */
/*   Updated: 2024/11/03 17:18:48 by aelbouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	totalsize;
	size_t	i;

	totalsize = count * size ;
	ptr = malloc (totalsize);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < totalsize)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
