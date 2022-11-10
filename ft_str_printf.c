/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:02:33 by hobenaba          #+#    #+#             */
/*   Updated: 2022/11/09 16:09:02 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_strlen(char *str)
{
    int i;;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
int ft_str_printf(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
    return (ft_strlen(str));
}
