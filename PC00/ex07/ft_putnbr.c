/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:59:19 by migmarti          #+#    #+#             */
/*   Updated: 2022/09/23 12:39:04 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(c)

{

	write (1, &c, 1);

}

void	ft_reverse(int nb)

{
	char	r;
	int	rev;
	int	remainder;

	rev = 0;
	if (nb < 0)
		
	{
		nb *= -1;
		ft_putchar('-');
	}
	else
	{

