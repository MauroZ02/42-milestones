/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:11:44 by mzangaro          #+#    #+#             */
/*   Updated: 2024/10/11 16:41:18 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trim;
	size_t	len_substr;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	if (j < i)
		return (NULL);
	len_substr = j - i + 1;
	trim = ft_calloc(len_substr + 1, sizeof(char));
	ft_strlcpy(trim, (char *)s1 + i, len_substr + 1);
	return (trim);
}

/*int main(void)
{
	char *s1 = "!_(hola!__(";
	char *set = "!_(";
	char *result;

	result = ft_strtrim(s1, set);
	printf("string without set: %s\n", result);
	free (result);
	return 0;
}*/