#!/bin/sh

INCLUDES="includes/"
FT_PRINTF_TESTER_DIR="ft_printf_tester"
FT_PRINT_TESTER_C="ft_printf_tester.c"

cd ..
make re
cc -Wall -Wextra -Werror -g3 -I $INCLUDES $FT_PRINTF_TESTER_DIR/$FT_PRINT_TESTER_C -L. -lftprintf
valgrind -q --leak-check=full --track-origins=yes --show-leak-kinds=all --track-fds=yes --trace-children=yes ./a.out
rm ./a.out
make fclean
cd $FT_PRINTF_TESTER_DIR
