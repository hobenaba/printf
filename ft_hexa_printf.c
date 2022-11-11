/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:32:50 by hobenaba          #+#    #+#             */
/*   Updated: 2022/11/11 16:18:39 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
int ft_len_base16 (unsigned int n)
{
    int i;

    i = 0;
    if (n == 0)
        return (1);
    while (n)
    {
        i++;
        n /= 16;
    }
    return (i);
}
int ft_hexa_printf(unsigned int n, char c)
{
    unsigned int rem;
    int i;
    char hex[] = "0123456789abcdef";
    char heX[] = "0123456789ABCDEF";
    char *tab;
       
    rem = 0;
    i = ft_len_base16(n); 
    tab = malloc((i + 1) * sizeof(char));
    tab[i] = '\0';
    while(n != 0)
    {
        rem = n % 16;
        if (c == 'x')
            tab[i - 1] = hex[rem];
        else 
            tab[i - 1] = heX[rem];
        n = n / 16;
        i--;
    }
    i = ft_str_printf(tab);
    return (i);
}