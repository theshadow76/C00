/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwalker <vwalker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:41:11 by vwalker           #+#    #+#             */
/*   Updated: 2025/06/25 13:53:40 by vwalker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_reverse_alphabet(void) {
    char c;
    
    for (c = 'z'; c >= 'a';) {
        my_putchar(c);
        c--;
    }
}

int main() {
    ft_print_reverse_alphabet();

    return 0;
}