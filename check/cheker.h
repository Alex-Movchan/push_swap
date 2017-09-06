/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheker.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 18:23:17 by amovchan          #+#    #+#             */
/*   Updated: 2017/06/05 18:23:07 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHEKER_CHEKER_H
# define CHEKER_CHEKER_H

# include "../libft/libft.h"

typedef struct		s_int
{
	int				nbr;
	struct s_int	*next;
}					t_int;

typedef struct		s_flag
{
	int				a;
	int				b;
	int				v;
	int				c;
	int				d;
	int				count;
}					t_flag;

int					ft_valid(char **av, int len, t_flag **flag);
long int			ft_atoilong(char *str);
void				swap_stec(t_int **stec);
void				push(t_int **stec_a, t_int **stec_b);
int					sizestec(t_int *stec);
void				rotate(t_int **stec);
void				reverserotate(t_int **stec);
void				ft_chek(char *str, t_int **stac_a, t_int **stac_b);
int					stakissornmin(t_int *stack);
int					ft_cheksort(t_int *steck_a, t_int *stek_b);
void				ft_printstek(t_int *seck_a, t_int *stek_b);
void				ft_checker(t_int **stec_a, t_int **stec_b, t_flag *flag);
t_int				*ft_structnb(int ac, char **av);
void				ft_chek_flag(t_int *stek_a, t_int *stek_b, t_flag *flag);
int					stakissornmax(t_int *stack);

#endif
