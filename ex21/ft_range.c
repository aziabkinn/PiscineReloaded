/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziabkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 19:07:40 by aziabkin          #+#    #+#             */
/*   Updated: 2018/03/20 20:32:14 by aziabkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int len_of_array;
	int *arr;

	i = 0;
	len_of_array = max - min;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(*arr) * len_of_array);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
