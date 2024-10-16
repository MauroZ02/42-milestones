/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:49:32 by mzangaro          #+#    #+#             */
/*   Updated: 2024/10/14 20:27:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		++i;
	}
	if (i != n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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