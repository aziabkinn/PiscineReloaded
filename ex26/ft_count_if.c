/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziabkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 19:53:18 by aziabkin          #+#    #+#             */
/*   Updated: 2018/03/20 22:26:55 by aziabkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			j++;
		i++;
	}
	return (j);
}
