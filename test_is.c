/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunimot <akunimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 04:39:52 by akunimot          #+#    #+#             */
/*   Updated: 2024/04/27 04:44:58 by akunimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// int isalpha(int c)
int	test_isalpha(int i)
{
	bool	WC_flg;

	assert(ft_isalpha(i) == isalpha(i));
	WC_flg = false;
	return (WC_flg);
}

// int isalnum(int c)
int	test_isalnum(int i)
{
	bool	WC_flg;

	assert(ft_isalnum(i) == isalnum(i));
	WC_flg = false;
	return (WC_flg);
}

// int isascii(int c)
int	test_isascii(int i)
{
	bool	WC_flg;

	assert(ft_isascii(i) == isascii(i));
	WC_flg = false;
	return (WC_flg);
}

void	test_is(void)
{
	long long int i;
	bool WC_ISALPHA;
	bool WC_ISALNUM;
	bool WC_ISASCII;

	//	bool			WC_ISDIGIT;
	//	bool			WC_ISPRINT;
	i = INT_MIN;
	WC_ISALPHA = false;
	WC_ISALNUM = false;
	WC_ISASCII = false;
	srand((unsigned int)time(NULL));
	while (i < INT_MAX)
	{
		WC_ISALPHA = test_isalpha(i);
		WC_ISALNUM = test_isalnum(i);
		WC_ISASCII = test_isascii(i);
		i += get_rand(1, 100);
	}
	print_AC(WC_ISALPHA, "isalpla");
	print_AC(WC_ISALNUM, "isalnum");
	print_AC(WC_ISASCII, "isascii");
}