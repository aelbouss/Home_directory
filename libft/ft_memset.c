/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouss <aelbouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:20:04 by aelbouss          #+#    #+#             */
/*   Updated: 2024/11/02 14:26:57 by aelbouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset( void *pointer, int value, size_t count )
{
	size_t	i;

	if (!pointer)
		return (NULL);
	i = 0;
	while (i < count)
	{
		((unsigned char *)pointer)[i] = value;
		i++;
	}
	return (pointer);
}