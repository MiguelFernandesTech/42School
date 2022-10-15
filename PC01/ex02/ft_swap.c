/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:10:50 by migmarti          #+#    #+#             */
/*   Updated: 2022/09/28 14:34:02 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*
int	main(void)
{
	int a = 20;
	int b = 40;
	printf("a is %d, b is %d\n", a, b);
  	ft_swap(&a, &b);
  	printf("a is %d, b is %d\n", a, b);
	return (0);
}
*/
