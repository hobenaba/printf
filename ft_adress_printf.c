/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:20:28 by hobenaba          #+#    #+#             */
/*   Updated: 2022/11/14 09:32:56 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_adress_printf(unsigned long n)
{
    int i;
    write(1, "0x", 2);
    i = ft_hexa_printf(n, 'x');
    return (i + 2);
}
// #include <stdio.h>
// int main()
// {
//     //printf("%p", &a);
//     ft_adress_printf(-1);
// }
