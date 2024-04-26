#include "../libft/libft.h"
#include <assert.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	test_isalpha(int i)
{
	bool	WC_flg;

	// == test == int isalpha(int c)
	assert(ft_isalpha(i) == isalpha(i));
	WC_flg = false;
	return (WC_flg);
}

int	test_isalnum(int i)
{
	bool	WC_flg;

	// == test == int isalnum(int c)
	assert(ft_isalnum(i) == isalnum(i));
	WC_flg = false;
	return (WC_flg);
}

int	test_isascii(int i)
{
	bool	WC_flg;

	// == test == int isascii(int c)
	assert(ft_isascii(i) == isascii(i));
	WC_flg = false;
	return (WC_flg);
}

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

void	test_is(void)
{
	long long int	i;
	bool			WC_ISALPHA;
	bool			WC_ISALNUM;
	bool			WC_ISASCII;

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

int	main(void)
{
	test_is();
	return (0);
}
