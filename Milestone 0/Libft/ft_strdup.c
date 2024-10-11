/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:57:08 by mzangaro          #+#    #+#             */
/*   Updated: 2024/10/11 16:43:36 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	size;
	size_t	i;

	if (s == 0)
		return (NULL);
	size = ft_strlen(s);
	result = ft_calloc(size + 1, sizeof(char));
	if (result == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = s[i];
		i++;
	}
	return (result);
}

/*int main(void)
{
	char *string = ft_strdup("Hola");
	printf("%s\n", string);
	free(string);
	return 0;
}
*/