/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medianstek.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:18:13 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 16:19:43 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		medianstek(t_int *stek, int size)
{
	t_int	*stek1;
	t_int	*stek2;
	int		nb;
	int		len;

	stek1 = stek;
	len = size;
	while (stek1 && len-- > 0)
	{
		stek2 = stek;
		if ((nb = ft_median(stek1, stek2, size)) != 0)
			return (nb);
		stek1 = stek1->next;
	}
	return (0);
}

int		ft_median(t_int *stek1, t_int *stek2, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = size;
	while (stek2 && len-- > 0)
	{
		if (stek1->nbr > stek2->nbr)
			i++;
		else if (stek1->nbr < stek2->nbr)
			j++;
		if (size % 2 == 0 && (i == j + 1 && i == (size / 2)))
			return (stek1->nbr);
		else if (size % 2 == 1 && i == j && i == size / 2)
			return (stek1->nbr);
		stek2 = stek2->next;
	}
	return (0);
}
