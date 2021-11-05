NAME = race01

SRCS = src/get_random_ch.c src/get_term_size.c src/matrix.c src/get_prob.c src/kbhit.c src/main.c
SRCSOB = get_random_ch.c get_term_size.c kbhit.c matrix.c get_prob.c main.c

INC = inc/matrix.h
INCOB = matrix.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lncurses

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCSOB) -I $(INCOB)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)
reinstall: uninstall clean all
