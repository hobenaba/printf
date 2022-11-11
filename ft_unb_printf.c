/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unb_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:16:42 by hobenaba          #+#    #+#             */
/*   Updated: 2022/11/11 16:55:55 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
int ft_unb_printf(unsigned int nb)
{
    int i;
    
    i = ft_len(nb);
    if (nb > 9)
    {
        ft_unb_printf(nb / 10);
        ft_unb_printf(nb % 10);
    }
    else 
        ft_putchar(nb + '0');
    return (i);
}