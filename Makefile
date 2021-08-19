NAME = libftprintf.a

SOURCES = ft_printf.c

RM = @rm -f

RANLIB = @ranlib

ARCHIVE = @ar -rc

CC = @clang

CFLAGS = -Wall -Wextra -Werror

OBJECTS = ${SOURCES:.c=.o}

MSG1 = @echo "Compiled ✔︎"
MSG2 = @echo "Cleaned ✔︎"

# Mandatory
$(NAME): ${OBJECTS}
	${ARCHIVE} ${NAME} ${OBJECTS}
	${RANLIB} ${NAME}
	${MSG1}

# Mandatory
all: ${NAME}

# Mandatory
clean: 
	${RM}	${OBJECTS}
	${MSG2}

# Mandatory
fclean: clean
	${RM} ${NAME}

# Mandatory
# Regenarate compilation
re: fclean all

# phony will run, independent from the state of the file system, avoid make in files with same name
.PHONY: all clean fclean re