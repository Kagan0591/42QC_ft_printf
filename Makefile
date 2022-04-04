###_*_*_*_*_*_*_*_*_*_*_*_*_Makefile_ft_printf_*_*_*_*_*_*_*_*_*_*_*_*_###
## Pour compiler les bonus, si il y a en a, d/commenter les lignes B_SRCS_FILES,
## B_SRCS_DIR, B_SRCS et dans les instructions de la ligne OBJS_FILES,
## décommenter $(B_SRCS_FILES:.c=.o)

###-------------------------# VARIABLES ##-------------------------###
NAME = libftprintf.a

SRCS_FILES 		=	ft_printf.c \

#B_SRCS_FILES	= 	 \

## Nommer les fichiers objets
OBJS_FILES 	= $(SRCS_FILES:.c=.o) #$(B_SRCS_FILES:.c=.o) # Utilise les noms de fichier de la variable SRCS_FILES et modifie le suffix .c en .o

### Repertoires ###
SRCS_DIR 	= srcs/
#B_SRCS_DIR 	= bonus_srcs/
OBJS_DIR	= objs/
INCLUDE_DIR = include/

SRCS 		= $(addprefix $(SRCS_DIR), $(SRCS_FILES))
#B_SRCS 		= $(addprefix $(B_SRCS_DIR), $(B_SRCS_FILES))
OBJS 		= $(addprefix $(OBJS_DIR), $(OBJS_FILES))
VPATH 		= $(SRCS_DIR) $(B_SRCS_DIR)

### Compilations et archivage ###
CC 			= gcc
CFLAGS 		= -Wall -Werror -Wextra
AR 			= ar -cr

### Autres Fonctions ###
RM 			= rm -rf
NORMINETTE 	= norminette
LIBFT_DIR = 42Qc_libft/
LIBFT = ${MAKE} --silent -C ${LIBFT_DIR}

### Colour var ###

END			= \033[0m
BOLD		= \033[1m
ITALIC		= \033[3m
URL			= \033[4m
BLINK		= \033[5m
BLINK2		= \033[6m
SELECTED	= \033[7m

BLACK		= \033[30m
RED			= \033[31m
GREEN		= \033[32m
YELLOW		= \033[33m
BLUE		= \033[34m
VIOLET		= \033[35m
BEIGE		= \033[36m
WHITE		= \033[37m


###--------------------------## REGLES ##--------------------------###

all: obj $(NAME)

$(OBJS_DIR)%.o:%.c
	$(CC) $(CFLAGS) -I${LIBFT_DIR} -I${INCLUDE_DIR} -I. -o $@ -c $<

$(NAME): $(OBJS)
	${LIBFT}
	$(AR) $(NAME) $(OBJS) ${LIBFT_DIR}*.o
	@echo "${OBJS} ${GREEN} ${BOLD}\n\nObjects files are added to the archive libftprintf.a correctly\n${END}"

bonus: ${NAME} ${BONUS_OBJS}
	${LIBFT}
	@${ARCHIVE} ${NAME} ${BONUS_OBJS}
	@echo "${BONUS_OBJS} ${GREEN} ${BOLD}\n\nObjects files And bonus objects files are added to the archive libftprintf.a correctly\n${END}"

exec:
	${LIBFT}
	${CC} ${FLAGS} -I${INCLUDE_DIR} -o test ${SRCS}

test: norm
	${LIBFT}
	${CC} ${FLAGS} -I${INCLUDE_DIR} -Og -o test ${SRCS} ft_printf_main.c
	valgrind ./test

obj:
	@mkdir -p $(OBJS_DIR)

norm:
	-$(NORMINETTE) $(SRCS) include/*

clean:
	$(RM) $(OBJS)

fclean:	clean
	${LIBFT} fclean
	$(RM) $(NAME) $(OBJS_DIR) test
	@echo "${BONUS_OBJS} ${GREEN} ${BOLD}\n\nObjects files And possibly bonus objects files are deleted to the archive libftprintf.a correctly\n${END}"


re:	fclean all

phony: bonus exec test norm clean fclean
