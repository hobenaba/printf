/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:22:31 by hobenaba          #+#    #+#             */
/*   Updated: 2022/11/14 09:33:26 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int ft_hexa_printf(unsigned int n, char c)
{
    char x[] = "0123456789abcdef";
    char X[] = "0123456789ABCDEF";
    if (n >= 16)
    {
        ft_hexa_printf(n / 16, c);
        ft_hexa_printf(n % 16, c);
    }
    else
    {
        if (c == 'x')
            ft_char_printf(x[n]); 
        else
            ft_char_printf(X[n]);
    }
    return (ft_len(n / 1.6));        
}