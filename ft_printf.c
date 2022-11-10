/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:10:21 by hobenaba          #+#    #+#             */
/*   Updated: 2022/11/10 16:48:57 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int check_my(char c, va_list p)
{
    int i;
    
    i = 0;
    if (c == 'c')
        i = ft_char_printf(va_arg(p, int));
    if (c == 'd' || c == 'i')
       i =  ft_iint_printf(va_arg(p, int));
    if (c == 's')
        i = ft_str_printf(va_arg(p, char *));
    if (c == 'u')
        i = ft_unb_printf(va_arg(p, unsigned int));
    if (c == 'p')
        i = ft_adress_printf(va_arg(p, unsigned long));
    if (c == 'x' || c == 'X')
        i = ft_hex_printf(va_arg(p, unsigned int), c);
    return (i);
}
int ft_printf(const char *format, ...)
{
    int i;
    int len;
    va_list p;
    
    len = 0;
    i = 0;
    va_start(p, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            len = check_my(format[i], p);
        }
        i++;
    }
    va_end (p);
    return (len);
}
