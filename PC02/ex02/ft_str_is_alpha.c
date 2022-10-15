/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:29:19 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/02 11:53:37 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	if (str[c] == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if ((str[c] >= 'A' && str[c] <= 'Z')
			|| (str[c] >= 'a' && str[c] <= 'z'))
			c++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char str[]= "aq1es";
	printf("%d\n", ft_str_is_alpha(str));
	return(0);
}
*/
