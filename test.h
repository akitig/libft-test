/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunimot <akunimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 04:41:03 by akunimot          #+#    #+#             */
/*   Updated: 2024/04/27 04:45:45 by akunimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "../libft/libft.h"
# include <assert.h>
# include <ctype.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

// utils.c
int		get_rand(int min, int max);
void	print_AC(int WC, char *func);

// test_is.c
int		test_isalpha(int i);
int		test_isalnum(int i);
int		test_isascii(int i);

void	test_is(void);

#endif