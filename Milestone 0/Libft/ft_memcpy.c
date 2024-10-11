/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:07:34 by mzangaro          #+#    #+#             */
/*   Updated: 2024/10/07 16:47:39 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cast_dest;
	char	*cast_src;

	cast_dest = (char *)dest;
	cast_src = (char *)src;
	i = 0;
	while (i < n)
	{
		cast_dest[i] = cast_src[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[40] = "      el mejor de todos los tiempos";
	char	src[20] = "Messi";
	ft_memcpy(dest, src, 5);
	write(1, dest, 40);
	return (0);
}*/