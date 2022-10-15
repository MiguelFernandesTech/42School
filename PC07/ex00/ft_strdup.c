/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:52:39 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/09 11:34:26 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char*	ptr;
	int		n;
	int		i;

	i = 0;
	n = 0;
	while(src[n] != '\0')
	{
		n++;
	}

	ptr = (char*)malloc(n * sizeof(char));

	while (i < n)
	{
		ptr[i] = src[i];
		i++;
	}
	return(ptr);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strdup(argv[1]));
	return(0);
}
*/
