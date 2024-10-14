/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:11:44 by mzangaro          #+#    #+#             */
/*   Updated: 2024/10/11 14:07:37 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counternum(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		counter++;
	if (n < 0)
	{
		n = n * -1;
		counter++;
	}
	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		aux;
	int		nb;

	nb = n;
	aux = counternum(n);
	itoa = ft_calloc(aux + 1, sizeof(char));
	itoa[aux--] = '\0';
	if (nb < 0)
	{
		nb = nb * -1;
		itoa[0] = '-';
	}
	if (!nb)
		itoa[0] = '\0';
	while (nb > 0)
	{
		itoa[aux--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (itoa);
}

/*int main()
{
	int n = 435967;
	printf("result: %s", ft_itoa(n));
}*/