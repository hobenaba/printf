/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:02:33 by hobenaba          #+#    #+#             */
/*   Updated: 2022/11/13 10:56:44 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_str_printf(const char *str)
{
    int i;

    i = 0;
    if (str == NULL)
        str = "(null)";
    while(str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
    return (ft_strlen(str));
}
// #include <stdio.h>
// int main()
// {
//     int i;
//    i = ft_str_printf(NULL);
//     //i = printf("%s", NULL);
//     printf("%d", i);
//  }
