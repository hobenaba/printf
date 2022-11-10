/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:29:51 by hobenaba          #+#    #+#             */
/*   Updated: 2022/11/10 14:09:35 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_nb_printf(int n)
{ 
    int i;

    i = len(n);
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return(11);
    }
    else if (n < 0)
    {
        ft_putchar('-');   
        ft_nb_printf(n * -1);
    } 
    else if (n > 9)
    {  
        ft_nb_printf(n / 10);
        ft_nb_printf(n % 10);
    }
    else 
        ft_putchar(n + '0');
    return (i);
} 