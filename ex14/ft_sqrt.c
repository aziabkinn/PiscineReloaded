/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziabkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 16:06:56 by aziabkin          #+#    #+#             */
/*   Updated: 2018/03/20 16:11:15 by aziabkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int k;

	k = 1;
	if (nb < 0)
		return (0);
	while (k * k <= nb)
	{
		if (k * k == nb)
			return (k);
		k++;
	}
	return (0);
}
