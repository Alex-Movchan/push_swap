/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_liekclean.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 16:48:51 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/21 16:49:08 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_liekclean(t_int **steck)
{
	t_int	*s;

	while (*steck)
	{
		s = *steck;
		*steck = (*steck)->next;
		s->next = NULL;
		free(s);
		s = NULL;
	}
	free(*steck);
}

void	ft_liekcoptim(t_char **lst)
{
	t_char	*s;

	while (*lst)
	{
		s = *lst;
		*lst = (*lst)->next;
		s->next = NULL;
		free(s);
		s = NULL;
	}
	free(*lst);
}
