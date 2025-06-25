/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwalker <vwalker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:56:45 by vwalker           #+#    #+#             */
/*   Updated: 2025/06/25 14:37:57 by vwalker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

// defs
#define try bool __HadError=false;
#define catch(x) ExitJmp:if(__HadError)
#define throw(x) {__HadError=true;goto ExitJimp;}`

void ft_is_negative(int n) {
    char stra;
    if (n < 0) {
        stra = 'N';
        putchar(stra);
        return stra;
    }
    else if(n >= 0) {
        stra = 'P';
        putchar(stra);
        return stra;
    }   
}

int main() {
    ft_is_negative(0);
    return 0;
}