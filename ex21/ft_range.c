/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 15:35:21 by clingier          #+#    #+#             */
/*   Updated: 2018/10/02 06:23:34 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;
	int i;

	if (min >= max)
		return (NULL);
	if (!(result = (int *)malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = 0;
	while (min < max)
		result[i++] = min++;
	return (result);
}
