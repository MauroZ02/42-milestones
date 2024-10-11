/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:54:58 by mzangaro          #+#    #+#             */
/*   Updated: 2024/10/11 16:40:52 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == 0)
		return (NULL);
	substr = ft_calloc(len + 1, sizeof(char));
	if (substr == 0)
		return (NULL);
	ft_strlcpy(substr, (char *)s + start, len);
	return (substr);
}

/*int main(void)
{
	char const *s = "Home la como esto";
	unsigned int start = 2;
	size_t len = 11;
	char *result = ft_substr(s, start, len);

	printf("substr: %s", result);
	return 0;
}*/