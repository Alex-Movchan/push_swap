/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoilong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 18:21:15 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/20 18:21:44 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cheker.h"

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

int			sizestec(t_int *stec)
{
	int		i;

	i = 0;
	while (stec)
	{
		stec = stec->next;
		i++;
	}
	return (i);
}
