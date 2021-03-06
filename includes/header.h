/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 13:21:25 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/19 19:27:16 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	*ft_strcpy(char *dest, char *src);
int		array_width(char *array);
int		array_height(char *array);
int		colle_type(char *array);
void	ft_print(char *array);
void	typesix(char *array);
void	typefive(char *array);
#endif
