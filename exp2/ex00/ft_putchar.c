/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staladta <staladta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 10:55:47 by ynouveau          #+#    #+#             */
/*   Updated: 2026/05/07 18:20:00 by staladta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char potato)
{
	write(1, &potato, 26);
}

int main(void)
{
	// ft_putchar tests
	char character;
	character = 'a';

	//printf("%c", character);
	
	ft_putchar(character);
	
	return (0);
}
