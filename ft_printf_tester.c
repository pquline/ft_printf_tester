#include "ft_printf.h"
#include <stdio.h>

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define PURPLE "\033[0;35m"
#define NO_STYLE "\033[0m"
#define TEST_BLANK "\n\n"

void	print_columns(void)
{
	printf("\n\t\t\t\t");
	printf("FT_PRINTF");
	printf("\t\t");
	printf("PRINTF");
	printf("\t\t\t");
	printf("STATUS\n");
}

void	print_category(char *converter, char *long_name)
{
	printf(PURPLE);
	printf("%s - %s:", converter, long_name);
	printf(NO_STYLE);
	printf("\n\n");
}

void	print_status(int result)
{
	printf("\t\t\t");
	if (result == 0)
	{
		printf(GREEN);
		printf("OK");
	}
	else
	{
		printf(RED);
		printf("KO");
	}
	printf(NO_STYLE);
}

void	print_result(int ft_result, int og_result)
{
	if (og_result >= 21)
		printf("\n\t\t\t\t");
	for (int i = 0; i + og_result < 21 ; i += 8)
		printf("\t");
	printf("%d\t\t\t%d", ft_result, og_result);
	print_status(ft_result - og_result);
}

void	print_no_conversion(char *str)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf("ft_printf: ");
	ft_result = ft_printf(str);
	printf("\n");
	printf("og_printf: ");
	og_result = printf("%s", str);
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_single_character(unsigned char c)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf("ft_printf: '");
	ft_result = ft_printf("%c", c);
	printf("'\n");
	printf("og_printf: '");
	og_result = printf("%c", c);
	printf("'");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_string(char *str)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf("ft_printf: ");
	ft_result = ft_printf("%s", str);
	printf("\n");
	printf("og_printf: ");
	og_result = printf("%s", str);
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_pointer(void *ptr)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf("ft_printf: ");
	ft_result = ft_printf("%p", ptr);
	printf("\n");
	printf("og_printf: ");
	og_result = printf("%p", ptr);
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_decimal(int nbr)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf("ft_printf: ");
	ft_result = ft_printf("%d", nbr);
	printf("\n");
	printf("og_printf: ");
	og_result = printf("%d", nbr);
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_integer(int nbr)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf("ft_printf: ");
	ft_result = ft_printf("%i", nbr);
	printf("\n");
	printf("og_printf: ");
	og_result = printf("%i", nbr);
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_unsigned_decimal(unsigned int nbr)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf("ft_printf: ");
	ft_result = ft_printf("%u", nbr);
	printf("\n");
	printf("og_printf: ");
	og_result = printf("%u", nbr);
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_hex_lower(int nbr)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf("ft_printf: ");
	ft_result = ft_printf("%x", nbr);
	printf("\n");
	printf("og_printf: ");
	og_result = printf("%x", nbr);
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_hex_upper(int nbr)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf("ft_printf: ");
	ft_result = ft_printf("%X", nbr);
	printf("\n");
	printf("og_printf: ");
	og_result = printf("%X", nbr);
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_percent()
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf("ft_printf: '");
	ft_result = ft_printf("%%");
	printf("'\n");
	printf("og_printf: '");
	og_result = printf("%%");
	printf("'");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}
void	print_mix1(char *format, int n1, unsigned int n2, int n3, int n4, int n5)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf("ft_printf: '");
	ft_result = ft_printf(format, n1, n2, n3, n4, n5);
	printf("'\n");
	printf("og_printf: '");
	og_result = printf(format, n1, n2, n3, n4, n5);
	printf("'");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_mix2(char *format, char *s1, char *s2, char *s3, char *s4, char *s5)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf("ft_printf: '");
	ft_result = ft_printf(format, s1, s2, s3, s4, s5);
	printf("'\n");
	printf("og_printf: '");
	og_result = printf(format, s1, s2, s3, s4, s5);
	printf("'");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	no_conversion(void)
{
	print_columns();
	print_category("--", "NO CONVERSION");
	print_no_conversion("");
	print_no_conversion("...");
	print_no_conversion("hello, world");
	print_no_conversion("0123456789ABCDEF");
	print_no_conversion("abcdefghijklmnopqrstuvwxyz");
}

void	single_character(void)
{
	print_columns();
	print_category("\%c", "SINGLE CHARACTER");
	print_single_character(0);
	print_single_character(32);
	print_single_character(35);
	print_single_character(60);
	print_single_character(100);
	print_single_character(126);
	print_single_character(254);
}

void	string(void)
{
	print_columns();
	print_category("\%s", "STRING");
	print_string("");
	print_string("...");
	print_string("hello, world");
	print_string("0123456789ABCDEF");
	print_string("abcdefghijklmnopqrstuvwxyz");
}

void	pointer(void)
{
	print_columns();
	print_category("\%p", "POINTER");
	print_pointer(0);
	print_pointer((void *)-2147483648);
	print_pointer("");
	print_pointer("hello");
	print_pointer((void *)0x1234567890);
}

void	decimal(void)
{
	print_columns();
	print_category("\%d", "DECIMAL NUMBER");
	print_decimal(-2147483648);
	print_decimal(-42);
	print_decimal(0);
	print_decimal(42);
	print_decimal(2147483647);
	print_decimal((int)4147483648);
}

void	integer(void)
{
	print_columns();
	print_category("\%i", "INTEGER NUMBER");
	print_integer(-2147483648);
	print_integer(-42);
	print_integer(0);
	print_integer(42);
	print_integer(2147483647);
	print_integer((int)4147483648);
}

void	unsigned_decimal(void)
{
	print_columns();
	print_category("\%u", "UNSIGNED DECIMAL NUMBER");
	print_unsigned_decimal(0);
	print_unsigned_decimal(42);
	print_unsigned_decimal(2147483648);
	print_unsigned_decimal(4294967295);
	print_unsigned_decimal((unsigned int)-4294967295);
	print_unsigned_decimal((unsigned int)8294967295);
}

void	hex_lower(void)
{
	print_columns();
	print_category("\%x", "HEX LOWERCASE NUMBER");
	print_hex_lower(-2147483648);
	print_hex_lower(-42);
	print_hex_lower(0);
	print_hex_lower(42);
	print_hex_lower(2147483647);
	print_hex_lower((int)4147483648);
}

void	hex_upper(void)
{
	print_columns();
	print_category("\%X", "HEX UPPERCASE NUMBER");
	print_hex_upper(-2147483648);
	print_hex_upper(-42);
	print_hex_upper(0);
	print_hex_upper(42);
	print_hex_upper(2147483647);
	print_hex_upper((int)4147483648);
}

void	percent(void)
{
	print_columns();
	print_category("\%\%", "PERCENT SIGN");
	print_percent();
}

void	mix(void)
{
	print_columns();
	print_category("--", "MIX");
	print_mix1("%d %u %d %x %d", 1, 31415, 3, 0xa, 5);
	print_mix1("%d %u %d %x %d", -214748640, 0, 2147483647, 0x0, -2147483648);
	print_mix1("%d %u %d %X %d", -42, 28000, 3, 0x11111111, 2147483647);
	print_mix2("%s %s %s %s %s", "test", "test", "test", "test", "test");
	print_mix2("%s %s %s %s %s", "oh", "hello", "guys", "!", "amazing");
	print_mix2("%s %s %s %s %s", "david", "lafarge", "pokemon", "miss", "jirachi");
}

int	main(void)
{
	no_conversion();
	single_character();
	string();
	pointer();
	decimal();
	integer();
	unsigned_decimal();
	hex_lower();
	hex_upper();
	percent();
	mix();
	return (0);
}
