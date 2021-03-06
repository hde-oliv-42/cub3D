/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dfree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:23:37 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:08:11 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dfree(char **a)
{
	char	**pointer;

	if (a == NULL)
		return ;
	pointer = a;
	while (*a)
		free(*a++);
	free(pointer);
}
