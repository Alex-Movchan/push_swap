/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 18:05:49 by amovchan          #+#    #+#             */
/*   Updated: 2017/06/10 11:58:34 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cheker.h"

int		ft_strisnbr(char *str)
{
	int i;

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
	int i;
	int j;

	i = 0;
	while (av[++i])
	{
		j = 0;
		while (av[++j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]) && i != j
				&& (av[i][1] < 97 && av[j][1] < 97))
				return (0);
		}
	}
	return (1);
}

int		get_flag(char *str, t_flag **flag)
{
	if (!ft_strcmp(str, "-a")
		|| !ft_strcmp(str, "-c") || !ft_strcmp(str, "-count")
		|| !ft_strcmp(str, "-v") || !ft_strcmp(str, "-d"))
	{
		if (!ft_strcmp(str, "-a"))
			(*flag)->a = 1;
		else if (!ft_strcmp(str, "-c"))
			(*flag)->c = 1;
		else if (!ft_strcmp(str, "-v"))
			(*flag)->v = 1;
		else if (!ft_strcmp(str, "-d"))
			(*flag)->d = 1;
		else if (!ft_strcmp(str, "-count"))
			(*flag)->count = 1;
		return (1);
	}
	return (0);
}

int		ft_valid(char **av, int len, t_flag **flag)
{
	int			i;
	long int	nb;

	i = 1;
	while (i < len)
	{
		if (get_flag(av[i], flag) == 1)
			;
		else
		{
			if (!ft_strisnbr(av[i]))
				return (0);
			if (ft_strlen(av[i]) == 0)
				return (0);
			nb = ft_atoilong(av[i]);
			if (nb < -2147483648 || nb > 2147483647)
				return (0);
		}
		i++;
	}
	if (!ft_avstrcmp(av))
		return (0);
	return (1);
}
