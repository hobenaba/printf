/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:05:08 by hobenaba          #+#    #+#             */
/*   Updated: 2022/11/11 16:19:53 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int ft_char_printf(char c);
int ft_nb_printf(int n);
int ft_str_printf(char *str);
int ft_len(int n);
int ft_unb_printf(unsigned int nb);
int ft_iint_printf(int n);
void ft_putchar(char c);
int ft_adress_printf(unsigned long n);
int ft_hexa_printf(unsigned int n, char c);
int ft_printf(const char *format, ...);

#endif

