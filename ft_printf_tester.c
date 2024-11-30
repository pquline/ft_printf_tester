#include "ft_printf.h"
#include <stdio.h>

#define GREEN		"\033[0;32m"
#define RED			"\033[0;31m"
#define YELLOW		"\033[0;33m"
#define BLUE		"\033[0;34m"
#define NO_STYLE	"\033[0m"
#define TEST_BLANK	"\n"

#define HEADER	BLUE "\n"\
				"--------------------------------------------------------------------------------\n\n"\
				"               _____               _      __  ___ __          __                \n"\
				"              / _/ /_    ___  ____(_)__  / /_/ _// /____ ___ / /____ ____       \n"\
				"             / _/ __/   / _ \\/ __/ / _ \\/ __/ _// __/ -_|_-</ __/ -_) __/       \n"\
				"            /_/ \\__/___/ .__/_/ /_/_//_/\\__/_/__\\__/\\__/___/\\__/\\__/_/          \n"\
				"                  /___/_/                   /___/                               \n\n"\
				"--------------------------------------------------------------------------------\n"\
				"\n" NO_STYLE

void	print_header(void)
{
	ft_printf(HEADER);
}

void	print_title(char *title)
{
	int total_width = 80;
	int title_length = strlen(title) + 2;
	int padding = (total_width - title_length) / 2;

	printf("\n" YELLOW);
	for (int i = 0; i < padding; i++)
		printf("-");
	printf(" %s ", title);
	for (int i = 0; i < padding; i++)
		printf("-");
	if ((title_length % 2) != (total_width % 2))
		printf("-");
	printf("\n\n");
	printf(NO_STYLE);
}

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
	printf(YELLOW);
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
	usleep(10000);
	if (og_result >= 19)
		printf("\n\t\t\t\t");
	for (int i = 0; i + og_result < 19; i += 8)
		printf("\t");
	printf("%d\t\t\t%d", ft_result, og_result);
	print_status(ft_result - og_result);
}

void	print_no_conversion(char *str)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%s]\n" NO_STYLE, str);
	ft_printf("ft_printf: [");
	ft_result = ft_printf(str);
	printf("]\n");
	printf("og_printf: [");
	og_result = printf("%s", str);
	printf("]");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_single_character(unsigned char c)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%c]\n" NO_STYLE, c);
	ft_printf("ft_printf: [");
	ft_result = ft_printf("%c", c);
	printf("]\n");
	printf("og_printf: [");
	og_result = printf("%c", c);
	printf("]");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_string(char *str)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%s]\n" NO_STYLE, str);
	ft_printf("ft_printf: [");
	ft_result = ft_printf("%s", str);
	printf("]\n");
	printf("og_printf: [");
	og_result = printf("%s", str);
	printf("]");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_pointer(void *ptr)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%p]\n" NO_STYLE, ptr);
	ft_printf("ft_printf: [");
	ft_result = ft_printf("%p", ptr);
	printf("]\n");
	printf("og_printf: [");
	og_result = printf("%p", ptr);
	printf("]");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_decimal(int nbr)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%d]\n" NO_STYLE, nbr);
	ft_printf("ft_printf: [");
	ft_result = ft_printf("%d", nbr);
	printf("]\n");
	printf("og_printf: [");
	og_result = printf("%d", nbr);
	printf("]");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_integer(int nbr)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%d]\n" NO_STYLE, nbr);
	ft_printf("ft_printf: [");
	ft_result = ft_printf("%i", nbr);
	printf("]\n");
	printf("og_printf: [");
	og_result = printf("%i", nbr);
	printf("]");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_unsigned_decimal(unsigned int nbr)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%u]\n" NO_STYLE, nbr);
	ft_printf("ft_printf: [");
	ft_result = ft_printf("%u", nbr);
	printf("]\n");
	printf("og_printf: [");
	og_result = printf("%u", nbr);
	printf("]");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_hex_lower(int nbr)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%d]\n" NO_STYLE, nbr);
	ft_printf("ft_printf: [");
	ft_result = ft_printf("%x", nbr);
	printf("]\n");
	printf("og_printf: [");
	og_result = printf("%x", nbr);
	printf("]");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_hex_upper(int nbr)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%d]\n" NO_STYLE, nbr);
	ft_printf("ft_printf: [");
	ft_result = ft_printf("%X", nbr);
	printf("]\n");
	printf("og_printf: [");
	og_result = printf("%X", nbr);
	printf("]");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_percent()
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%s]\n" NO_STYLE, "%%");
	ft_printf("ft_printf: [");
	ft_result = ft_printf("%%");
	printf("]\n");
	printf("og_printf: [");
	og_result = printf("%%");
	printf("]");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}
void	print_mix1(char *format, int n1, unsigned int n2, int n3, int n4, int n5)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%s]\n" NO_STYLE, format);
	ft_printf("ft_printf: [");
	ft_result = ft_printf(format, n1, n2, n3, n4, n5);
	printf("]\n");
	printf("og_printf: [");
	og_result = printf(format, n1, n2, n3, n4, n5);
	printf("]");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_mix2(char *format, char *s1, char *s2, char *s3, char *s4, char *s5)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%s]\n" NO_STYLE, format);
	ft_printf("ft_printf: [");
	ft_result = ft_printf(format, s1, s2, s3, s4, s5);
	printf("]\n");
	printf("og_printf: [");
	og_result = printf(format, s1, s2, s3, s4, s5);
	printf("]");
	print_result(ft_result, og_result);
	printf(TEST_BLANK);
}

void	print_mix3(char *format, int *p1, unsigned int n2, int n3, int n4, int n5)
{
	size_t	ft_result;
	size_t	og_result;

	ft_printf(BLUE "           [%s]\n" NO_STYLE, format);
	ft_printf("ft_printf: [");
	ft_result = ft_printf(format, p1, n2, n3, n4, n5);
	printf("]\n");
	printf("og_printf: [");
	og_result = printf(format, p1, n2, n3, n4, n5);
	printf("]");
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

void	single_character_flags(void)
{
	print_columns();
	print_category("\%c", "SINGLE CHARACTER FLAGS");
	print_mix1("%5c", 'A', 0, 0, 0, 0);
	print_mix1("%1c", 'B', 0, 0, 0, 0);
	print_mix1("%-5c", 'C', 0, 0, 0, 0);
	print_mix1("%-1c", 'D', 0, 0, 0, 0);
	print_mix1("%05c", 'E', 0, 0, 0, 0);
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

void	integer_flags(void)
{
	print_columns();
	print_category("%d and %i", "INTEGER FLAGS");
	print_decimal(0);
	print_decimal(42);
	print_decimal(-42);
	print_mix1(" %.1d ", 0, 0, 0, 0, 0);
	print_mix1("%+5d", 42, 0, 0, 0, 0);
	print_mix1("%-5d", 42, 0, 0, 0, 0);
	print_mix1("%05d", 42, 0, 0, 0, 0);
	print_mix1("% d", 42, 0, 0, 0, 0);
	print_mix1("%+10.5d", 42, 0, 0, 0, 0);
	print_mix1("%+10.3d", 42, 0, 0, 0, 0);
	print_mix1("%+10.1d", 42, 0, 0, 0, 0);
	print_mix1("%-+10d", -42, 0, 0, 0, 0);
}

void	unsigned_flags(void)
{
	print_columns();
	print_category("%u", "UNSIGNED FLAGS");
	print_unsigned_decimal(0);
	print_unsigned_decimal(4294967295);
	print_mix1("%05u", 42, 0, 0, 0, 0);
	print_mix1("%10u", 42, 0, 0, 0, 0);
	print_mix1("%-10u", 42, 0, 0, 0, 0);
	print_mix1("%10.5u", 42, 0, 0, 0, 0);
}

void	hex_flags(void)
{
	print_columns();
	print_category("%x and %X", "HEXADECIMAL FLAGS");
	print_hex_lower(0);
	print_hex_lower(255);
	print_hex_upper(255);
	print_mix1("%#x", 255, 0, 0, 0, 0);
	print_mix1("%#X", 255, 0, 0, 0, 0);
	print_mix1("%#8x", 255, 0, 0, 0, 0);
	print_mix1("%-#8x", 255, 0, 0, 0, 0);
	print_mix1("%08x", 255, 0, 0, 0, 0);
}

void	string_flags(void)
{
	print_columns();
	print_category("%s", "STRING FLAGS");
	print_string("hello");
	print_string("world");
	print_mix2("%-20s", "hello", "", "", "", "");
	print_mix2("%20s", "world", "", "", "", "");
	print_mix2("%.5s", "hello, world", "", "", "", "");
	print_mix2("%-10.5s", "abcdef", "", "", "", "");
	print_mix2(" % 1s", "", "", "", "", "");
	print_mix2("% 1s", "", "", "", "", "");
}

void	pointer_flags(void)
{
	int	dummy = 42;

	print_columns();
	print_category("\%p", "POINTER FLAGS");
	print_pointer(NULL);
	print_pointer((void *)42);
	print_mix3("%20p", &dummy, 0, 0, 0, 0);
	print_mix3("%-20p", &dummy, 0, 0, 0, 0);
	print_mix3("%.5p", &dummy, 0, 0, 0, 0);
}

int	main(void)
{
	print_header();

	print_title("MANDATORY");
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

	print_title("BONUS");
	single_character_flags();
	integer_flags();
	unsigned_flags();
	hex_flags();
	string_flags();
	pointer_flags();

	return (0);
}
