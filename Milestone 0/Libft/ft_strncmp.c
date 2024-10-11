/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:49:32 by mzangaro          #+#    #+#             */
/*   Updated: 2024/10/07 16:47:09 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
	char s1[30] = "Hola Mrobando";
	char s2[30] = "Hola Pessi";
	int	result;

	result = ft_strncmp(s1, s2, 6);
	if (result == 0)
		write(1, "Equal\n", 6);
	if (result > 0)
		write(1, "s1 > s2\n", 8);
	if (result < 0)
		write(1, "s1 < s2\n", 8);

	return (0);
}*/