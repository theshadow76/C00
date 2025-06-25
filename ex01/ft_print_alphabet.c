/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwalker <vwalker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:53:34 by vwalker           #+#    #+#             */
/*   Updated: 2025/06/25 13:21:22 by vwalker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void) {
	char c;

	for (c = 'a'; c <= 'z'; ++c) {
		printf("%c", c);
	}
}

int main() {
	ft_print_alphabet();

	return 0;
}