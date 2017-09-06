/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 18:27:52 by amovchan          #+#    #+#             */
/*   Updated: 2017/06/10 12:12:48 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cheker.h"

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

char	**forst_tab(char **av, char **src, int *i)
{
	char	**tab;
	int		j;
	int		k;

	k = 0;
	if (src[2] && src[2][k] == '-')
	{
		while (src[k + 2])
			k++;
	}
	j = -1;
	while (av[++j])
		;
	tab = (char**)malloc(sizeof(char*) * (j + 2 + k));
	k = -1;
	tab[k + 1] = "0";
	while (av[++k])
		tab[k + 1] = ft_strdup(av[k]);
	j = 1;
	while (src[++j] && (*i)++)
		tab[++k] = src[j];
	tab[++k] = NULL;
	return (tab);
}

char	**ft_strparams(char *str, char **src, int *i)
{
	char	**tab;
	char	**av;
	int		j;

	j = -1;
	if (!(tab = ft_strsplit(str, ' ')) || !*tab)
	{
		free(tab);
		return (src);
	}
	else
	{
		while (tab[++j])
			;
		if (j > 0)
			*i = j;
		(*i)++;
	}
	av = forst_tab(tab, src, i);
	ft_delarrey(tab);
	return (av);
}

int		main(int argc, char **argv)
{
	t_int	*stec_a;
	t_int	*stec_b;
	t_flag	*flag;
	int		i;

	i = 0;
	flag = (t_flag*)malloc(sizeof(t_flag));
	if (argc == 2 || argv[2][0] == '-')
		argv = ft_strparams(argv[1], argv, &argc);
	if (!ft_valid(argv, argc, &flag))
	{
		ft_printf("%{red}s{eoc}\n", "Error");
		return (0);
	}
	if (argc == 1)
		return (0);
	stec_b = NULL;
	stec_a = ft_structnb(argc, argv);
	if (!stec_a)
		return (0);
	ft_checker(&stec_a, &stec_b, flag);
	free(flag);
	return (0);
}
