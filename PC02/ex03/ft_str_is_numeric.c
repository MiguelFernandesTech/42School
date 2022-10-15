/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:48:24 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/02 11:53:58 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

int	ft_str_is_numeric(char	*str)
{
	int	c;
	int	f;

	f = 0;
	c = 0;
	if (str[c] == '\0')
	{
	f = 1;
	}
	while (str[c] != '\0')
	{
		if (str[c] >= '0' && str[c] <= '9')
			f = 1;
		else
			return (0);
		c++;
	}
	return (f);
}
/*
int	main(void)
{
	char str[] = "";
	printf("%d\n", ft_str_is_numeric(str));
	return(0);
}
*/
