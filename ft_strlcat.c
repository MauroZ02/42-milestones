/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:39:31 by mzangaro          #+#    #+#             */
/*   Updated: 2024/10/07 16:47:25 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = 0;
	len_src = 0;
	if (size == 0)
		return (len_src);
	while (dst[len_dst] != '\0' && len_dst < size)
		len_dst++;
	while (src[len_src] != '\0')
		len_src++;
	if (len_dst < size)
	{
		i = 0;
		while (i < (size - len_dst - 1) && src[i] != '\0')
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
	}
	return (len_dst + len_src);
}

/*int main(void)
{
    // Scenario 1: When dst is empty.
    char dst1[30] = "";
    char src1[30] = "World!";
    size_t size1 = 30;

    ft_strlcat(dst1, src1, size1);
    write(1, dst1, 6); // Expect "World!"
    write(1, "\n", 1);

    // Scenario 2: When src is empty.
    char dst2[30] = "Hello ";
    char src2[30] = "";
    size_t size2 = 30;

    ft_strlcat(dst2, src2, size2);
    write(1, dst2, 6); // Expect "Hello "
    write(1, "\n", 1);

    // Scenario 3: When size is less than the length of dst.
    char dst3[30] = "Hello World!";
    char src3[30] = " Test!";
    size_t size3 = 5;

    ft_strlcat(dst3, src3, size3);
    write(1, dst3, 12); // Expect "Hello World!"
    write(1, "\n", 1);

    // Scenario 4: When size is exactly equal to the length of dst.
    char dst4[30] = "Hello";
    char src4[30] = " World!";
    size_t size4 = 5;

    ft_strlcat(dst4, src4, size4);
    write(1, dst4, 5); // Expect "Hello"
    write(1, "\n", 1);

    // Scenario 5: When size is larger than the combined lengths of dst and src.
    char dst5[30] = "Hello ";
    char src5[30] = "World!";
    size_t size5 = 50;

    ft_strlcat(dst5, src5, size5);
    write(1, dst5, 12); // Expect "Hello World!"
    write(1, "\n", 1);

    return (0);
}*/