/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwalker <vwalker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:53:30 by vwalker           #+#    #+#             */
/*   Updated: 2025/06/25 14:19:48 by vwalker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

int main() {
	char txt;

	txt = 'test';
	ft_putchar(txt);

	return 0;
}
