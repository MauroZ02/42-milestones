/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:16:45 by mzangaro          #+#    #+#             */
/*   Updated: 2024/10/09 18:33:24 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	negative;
	int	convert;

	i = 0;
	negative = 1;
	convert = 0;
	while (nptr[i] != '\0')
	{
		if (!(nptr[0] == '-' || nptr[0] == '+' || (nptr[0] >= '0'
					&& nptr[i] <= '9')))
			return (0);
		if (nptr[i] == '-' || nptr[i] == '+')
		{
			if (nptr[i] == '-')
				negative = -1;
			i++;
		}
		if (nptr[i] >= '0' && nptr[i] <= '9')
			convert = (convert * 10) + (nptr[i] - '0');
		else
			return (0);
		i++;
	}
	return (convert * negative);
}

/*#include <string.h>

int main ()
{
	char	nptr[] = "-77r7";
	printf("atoi: %d\n", atoi(nptr));
	printf("ft_atoi: %d\n", ft_atoi(nptr));
	return 0;
}*/