/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:09:16 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/13 12:19:08 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	int numb = 1;

	while(numb <= 100)
	{
		if(numb % 3 == 0 && numb % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if(numb % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if(numb % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			if(numb > 9)
				ft_putchar(numb / 10 + '0');
				ft_putchar(numb % 10 + '0');
		}
		write(1, "\n", 1);
		numb++;
	}
}
