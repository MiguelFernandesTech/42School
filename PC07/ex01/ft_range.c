/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:35:21 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/09 12:29:35 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int n;
	int i;

	n = max - min;
	i = 0;
	ptr = (int*)malloc(n* sizeof(int));
	if(min >= max)
	{
		return(0);
	}
	while(i < n)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return(ptr);
}

int	main()
{
	int *a;
	int o = 0;
	int min = 50;
	int max = 55;
	int n = max - (min);
	a = ft_range(min, max);

	while (o < n)
	{
		printf("%d", a[o]);
		o++;
	}
	return(0);
}
