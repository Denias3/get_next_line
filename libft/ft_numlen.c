/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeha <emeha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 10:00:52 by emeha             #+#    #+#             */
/*   Updated: 2018/12/04 10:04:07 by emeha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	int s;
	int del;

	del = 10;
	s = 0;
	while (del)
	{
		s++;
		if ((n / del) == 0)
			break ;
		del = del * 10;
	}
	return (s);
}
