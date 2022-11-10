/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iint_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:57:48 by hobenaba          #+#    #+#             */
/*   Updated: 2022/11/10 14:15:47 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_iint_printf(int n)
{
    int i;

    if (n == -2147483648)
    {
        write (1, "-2147483648", 11);
        return (11);
    }
    i = ft_len(n);
    if (n < 0)
    {
        ft_putchar('-');
        ft_iint_printf(n * -1);
    }
    else if (n > 9)
    {
        ft_iint_printf(n / 10);
        ft_iint_printf(n % 10);
    }
    else
        ft_putchar(n + '0');
    return (i);
}
int main()
{
    ft_iint_printf(-214);
}