/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoilong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:14:28 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 16:15:31 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoilong(char *str)
{
	long int	nbr;
	long int	negativ;
	int			i;

	i = 0;
	negativ = 1;
	nbr = 0;
	if (str[i] == '-')
		negativ = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += ((long int)str[i] - 48);
		i++;
	}
	return (nbr * negativ);
}

int			ft_isminmedian(t_int **stek, int nb)
{
	t_int	*begin;

	begin = *stek;
	while (begin)
	{
		if (begin->nbr <= nb)
			return (1);
		begin = begin->next;
	}
	return (0);
}

int			ft_ismaxmedian(t_int **stek, int nb)
{
	t_int	*begin;

	begin = *stek;
	while (begin)
	{
		if (begin->nbr > nb)
			return (1);
		begin = begin->next;
	}
	return (0);
}

int			sizestec(t_int *stec)
{
	int i;

	i = 0;
	while (stec)
	{
		stec = stec->next;
		i++;
	}
	return (i);
}
