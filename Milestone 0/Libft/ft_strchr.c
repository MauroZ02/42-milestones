/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:59:18 by mzangaro          #+#    #+#             */
/*   Updated: 2024/10/07 16:47:27 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
	{
		while (s[i] != '\0')
		{
			i++;
		}
		return ((char *)&s[i]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	const char s[20] = "Hola Mundo";
	char c;
	c = 'o';
	char *result;
	
	result = ft_strchr(s, c);
	
	write(1, result, 1);
	write(1, "\n", 1);
	return 0;
}*/
