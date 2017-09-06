/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:24:09 by amovchan          #+#    #+#             */
/*   Updated: 2017/06/10 11:58:57 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_strisnbr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			i++;
		if (str[i] == '-' && i != 0)
			return (0);
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		ft_avstrcmp(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[++i])
	{
		j = 0;
		while (av[++j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]) && i != j)
				return (0);
		}
	}
	return (1);
}

int		ft_valid(char **av, int len)
{
	int			i;
	long int	nb;

	i = 1;
	while (i < len)
	{
		if (!ft_strisnbr(av[i]))
			return (0);
		if (ft_strlen(av[i]) == 0)
			return (0);
		nb = ft_atoilong(av[i]);
		if (nb < -2147483648 || nb > 2147483647)
			return (0);
		i++;
	}
	if (!ft_avstrcmp(av))
		return (0);
	return (1);
}
