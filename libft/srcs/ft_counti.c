/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counti.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-azz <aben-azz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 10:55:29 by aben-azz          #+#    #+#             */
/*   Updated: 2019/10/24 11:57:14 by aben-azz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_counti(char *string, char c, int i)
{
	int n;
	int l;

	l = 0;
	n = 0;
	while (l < i)
		(void)(string[l++] == c && n++);
	return (n);
}