/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:20:28 by hobenaba          #+#    #+#             */
/*   Updated: 2022/11/11 16:28:31 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_adress_printf(unsigned long n)
{
    int i;

    i = ft_hexa_printf(n, 'x');
    return (i);
}
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("%p", &a);
//     ft_adress_printf(&a);
// }
