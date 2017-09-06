/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:42:25 by amovchan          #+#    #+#             */
/*   Updated: 2017/06/10 12:12:20 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_delarrey(char **s)
{
	int		i;

	i = -1;
	while (s[++i])
	{
		free(s[i]);
		s[i] = NULL;
	}
	free(s);
}

char	**forst_tab(char **av)
{
	char	**tab;
	int		j;
	int		k;

	j = -1;
	k = 0;
	while (av[++j])
		;
	tab = (char**)malloc(sizeof(char*) * (j + 2));
	tab[k] = "1";
	while (av[k])
	{
		tab[k + 1] = ft_strdup(av[k]);
		k++;
	}
	tab[k + 1] = NULL;
	ft_delarrey(av);
	return (tab);
}

char	**ft_strparams(char *str, char **av, int *i)
{
	char	**tab;
	int		j;

	j = -1;
	if (!(tab = ft_strsplit(str, ' ')) || !*tab)
	{
		free(tab);
		return (av);
	}
	else
	{
		while (tab[++j])
			;
		if (j > 0)
			*i = j;
		(*i)++;
	}
	return (forst_tab(tab));
}

int		main(int argc, char **argv)
{
	t_int	*stec_a;
	t_int	*stec_b;

	if (argc == 2)
		argv = ft_strparams(argv[1], argv, &argc);
	if (!ft_valid(argv, argc))
	{
		ft_printf("%{red}s{eoc}\n", "Error");
		return (0);
	}
	stec_b = NULL;
	if (!(stec_a = ft_structnb(argc, argv)))
		ft_printf("%{red}s{eoc}\n", "malloc error ");
	if (argc <= 2 || stakissornmin(stec_a, sizestec(stec_a)) == 1)
		return (0);
	push_swap(stec_a, stec_b);
	return (0);
}
