/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunimot <akunimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 04:42:50 by akunimot          #+#    #+#             */
/*   Updated: 2024/04/27 04:43:09 by akunimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	get_rand(int min, int max)
{
	return (min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX)));
}

void	print_AC(int WC, char *func)
{
	if (!WC)
		printf("%s : AC\n", func);
	else
		printf("%s : WC\n", func);
}