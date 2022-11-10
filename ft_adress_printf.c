/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:58:51 by hobenaba          #+#    #+#             */
/*   Updated: 2022/11/10 16:40:19 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_len_base16(unsigned long n)
{
    unsigned int i;

    i = 0;
    if (n == 0)
        return (1);
    while (n)
    {
        n /= 16;
        i++;
    }
    return (i);
}
int ft_adress_printf(unsigned long n)
{
    unsigned long rem;
    unsigned char *h;
    unsigned int len;

    rem = 0;   
    len = ft_len_base16(n);
    h = malloc(sizeof(char) * len + 1);
    h[len] = '\0';
    while (n != 0)
    {
        rem = n % 16;
        if (rem <= 9)
            h[--len] = rem + 48;
        else
            h[--len] = rem + 87;
        n /= 16;   
    }
    write(1, "0x", 2);
    while (h[n])
        {
            write(1, &h[n], 1);
            n++;
        }
    return (n + 2);
}
#include <stdio.h>
int main()
{
    int a;
    ft_printf("%p",&a);
}