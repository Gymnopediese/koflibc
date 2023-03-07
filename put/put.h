/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:32:25 by albaud            #+#    #+#             */
/*   Updated: 2023/02/13 22:43:52 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUT_H
# define PUT_H

void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);

void	ft_write(char const *s, char *filename);

void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char *str);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putstr(char *str);

void	ft_putstra_clean(char **arr);
void	ft_putstra_join(char **arr, char *glue, int endl);

void	ft_putia_clean(int *arr, int size);

void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(long int nb);
void	ft_putnbrn(long int nb);

void	ft_putlist_join(t_list *list, void (*put)(), t_keyval join, int endl);

void	ft_putvector(t_vector a);
void	ft_putdnbr(char *name, long int num);
void	ft_putintm(t_matrix map);
#endif