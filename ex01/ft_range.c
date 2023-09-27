/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <ede-cola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:34:41 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/26 15:14:15 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	dest = 0;
	if (min >= max)
		return (dest);
	else
	{
		dest = malloc(sizeof(int) * (max - min));
		if (!dest)
			return (0);
		while (i < max - min)
		{
			dest[i] = min + i;
			i++;
		}
		return (dest);
	}
}
/*
int	main(void)
{
	int min;
	int max;
	int i;

	min = 5;
	max = 7;
	i = 0;
	while(i < max - min)
	{
		printf("%d", ft_range(min, max)[i]);
		i++;
	}
}*/