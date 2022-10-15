/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:30:09 by migmarti          #+#    #+#             */
/*   Updated: 2022/09/28 14:34:34 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main()
{
	int	a	= 4;
	int	b	= 2;
	int 	div;
	int		mod;
	ft_div_mod(a, b, &div, &mod);
	printf("division %d", div );
	printf("mod %d", mod);
}
*/
