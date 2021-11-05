NAME = MINILIBMX

SRCS = src/mx_atoi.c src/mx_isdigit.c src/mx_isspace.c src/mx_printchar.c src/mx_printint.c src/mx_printstr.c src/mx_strcpy.c src/mx_strcmp.c src/mx_strlen.c
SRCSOB = mx_atoi.c mx_isdigit.c mx_isspace.c mx_printchar.c mx_printint.c mx_printstr.c mx_strcpy.c mx_strcmp.c mx_strlen.c

INC = inc/header.h
INCOB = header.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -ar

all: install
install:
	@cp $(SRCS)
	@cp $(INC)
	@clang $(CFLAGS) -o $(NAME) $(SRCSOB) -I $(INC)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)
reinstall: uninstall clean all
