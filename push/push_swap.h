/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amovchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:14:21 by amovchan          #+#    #+#             */
/*   Updated: 2017/04/21 16:50:08 by amovchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_PUSH_SWAP_H
# define PUSH_SWAP_PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct		s_int
{
	int				nbr;
	struct s_int	*next;
}					t_int;

typedef struct		s_char
{
	char			*str;
	struct s_char	*next;
}					t_char;

void				ft_sortstek(t_int **steck_a,
					t_int **steck_b, int *len, t_char **lst);
t_char				*ft_charlst(t_char *lst);
int					ft_valid(char **av, int len);
t_int				*ft_structnb(int ac, char **av);
long int			ft_atoilong(char *str);
void				swap_stec(t_int **stec);
void				push(t_int **stec_a, t_int **stec_b);
int					sizestec(t_int *stec);
void				rotate(t_int **stec);
void				reverserotate(t_int **stec);
void				ft_chek(char *str, t_int **stac_a, t_int **stac_b);
int					stakissornmin(t_int *stack, int len);
void				ft_cheksort(t_int *steck_a, t_int *stek_b);
int					medianstek(t_int *stek, int size);
void				sort3elem_b(t_int **stek, t_char **lst);
int					stakissornmax(t_int *stack);
void				ft_quick_sort(t_int **steck_a, t_int **steck_b,
					int size, t_char **lst);
int					ft_ismaxmedian(t_int **stek, int nb);
int					ft_isminmedian(t_int **stek, int nb);
void				sortelementstekmin(t_int **stek, int len, t_char **lst);
int					ft_median(t_int *stek1, t_int *stek2, int size);
void				ft_pushbek(t_int **stek_a, t_int **stek_b,
					int len, t_char **lst);
void				ft_newlst(t_char **lst, char *str);
void				ft_quicksort(t_int **steck_a, t_int **steck_b,
					int size, t_char **lst);
void				ft_quicksort_b(t_int **steck_a, t_int **steck_b,
					int size, t_char **lst);
void				ft_rotate_beck_b(t_int **steck, int len, t_char **lst);
void				ft_rotate_beck(t_int **steck, int len, t_char **lst);
void				ft_push_sort1(t_int **steck_a, t_int **steck_b,
					t_char **lst, int *len);
void				ft_roteitstek1(t_int **steck_a, t_char **lst, int *len);
void				ft_push_sort2(t_int **steck_a, t_int **steck_b,
					t_char **lst, int *len);
void				ft_roteitstek2(t_int **steck_a, t_char **lst, int *len);
void				ft_quick_sort_b(t_int **steck_a, t_int **steck_b,
					int size, t_char **lst);
int					ft_optimoss2(t_char **list);
int					ft_optimoss3(t_char **list);
int					ft_optimoss4(t_char **list);
int					ft_optimoss5(t_char **lst);
int					ft_optimoss6(t_char **lst);
void				ft_pushbek_b(t_int **stek_a, t_int **stek_b,
					int len, t_char **lst);
int					ft_optim(t_char **lst);
void				ft_printlist(t_char *lst);
int					ft_optimiz(t_char *list);
int					ft_optimss(t_char **list);
void				sortelementstekmax(t_int **stek, int len, t_char **lst);
void				sort3elem(t_int **stek, t_char **lst);
t_int				*ft_steckcpy(t_int *stek);
void				push_swap(t_int *stec_a, t_int *stec_b);
void				ft_liekclean(t_int **steck);
void				ft_liekcoptim(t_char **lst);
#endif
