# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 11:03:30 by nshahid           #+#    #+#              #
#    Updated: 2023/10/17 15:29:08 by nshahid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                DIRECTORIES                                   #
# **************************************************************************** #

SRCP			= ./srcs/
SRCP_CHECK		= $(SRCP)check/
SCRP_GNL		= $(SRCP)gnl/
SRCP_LIST 		= $(SRCP)list/
SRCP_MEMORY		= $(SRCP)memory/
SRCP_PRINT		= $(SRCP)print/
SRCP_STRING		= $(SRCP)string/

SRCS_CHECK		= ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_isspace.c
SRCS_GNL		= ft_gnl_strjoin.c \
					ft_gnl_strchr.c \
					get_next_line.c
SRCS_LIST		= ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_lstsize.c
SRCS_MEMORY		= ft_bzero.c \
					ft_calloc.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c
SRCS_PRINT		= ft_printf.c \
					ft_putaddress.c \
					ft_putbase_fd.c \
					ft_putchar_fd.c \
					ft_putchar.c \
					ft_putendl_fd.c \
					ft_putendl.c \
					ft_puthexa.c \
					ft_putnbr_fd.c \
					ft_putnbr.c \
					ft_putstr_fd.c \
					ft_putstr.c \
					ft_putunsigned.c
SRCS_STRING		= ft_abs.c \
					ft_atoi.c \
					ft_itoa.c \
					ft_split.c \
					ft_strchr.c \
					ft_strcpy.c \
					ft_strdup.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strmapi.c \
					ft_strncmp.c \
					ft_strnew.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strtrim.c \
					ft_substr.c \
					ft_tolower.c \
					ft_toupper.c

SRC_CHECK		= $(addprefix $(SRCP_CHECK),$(SRCS_CHECK))
SRC_GNL			= $(addprefix $(SCRP_GNL),$(SRCS_GNL))
SRC_LIST		= $(addprefix $(SRCP_LIST),$(SRCS_LIST))
SRC_MEMORY		= $(addprefix $(SRCP_MEMORY),$(SRCS_MEMORY))
SRC_PRINT		= $(addprefix $(SRCP_PRINT),$(SRCS_PRINT))
SRC_STRING		= $(addprefix $(SRCP_STRING),$(SRCS_STRING))

OBJS_CHECK		= $(SRC_CHECK:.c=.o)
OBJS_GNL		= $(SRC_GNL:.c=.o)
OBJS_LIST		= $(SRC_LIST:.c=.o)
OBJS_MEMORY		= $(SRC_MEMORY:.c=.o)
OBJS_PRINT		= $(SRC_PRINT:.c=.o)
OBJS_STRING		= $(SRC_STRING:.c=.o)

HEAD			= ./includes/

# **************************************************************************** #
#                                  VARIABLES                                   #
# **************************************************************************** #

NAME		= libft.a
AR			= ar rcs
RM			= rm -f
LIB			= ranlib
GCC			= cc
CFLAGS 		= -Wall -Wextra -Werror

RESET		= \033[0m
BOLD		= \033[1m
RED			= \033[31m
GREEN		= \033[32m
YELLOW		= \033[33m
BLUE		= \033[34m

# **************************************************************************** #
#                                   TARGETS                                    #
# **************************************************************************** #

all: $(NAME)

$(OBJS_CHECK): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi

$(OBJS_GNL): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi

$(OBJS_LIST): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi

$(OBJS_MEMORY): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi

$(OBJS_PRINT): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi

$(OBJS_STRING): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi

$(NAME): $(OBJS_CHECK) $(OBJS_GNL) $(OBJS_LIST) $(OBJS_MEMORY) $(OBJS_PRINT) $(OBJS_STRING)
	@$(AR) $(NAME) $(OBJS_CHECK) $(OBJS_GNL) $(OBJS_LIST) $(OBJS_MEMORY) $(OBJS_PRINT) $(OBJS_STRING)
	@$(LIB) $(NAME)
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Created: $(words $(OBJS_CHECK) $(OBJS_GNL) $(OBJS_LIST) $(OBJS_MEMORY) $(OBJS_PRINT) $(OBJS_STRING)) object file(s)$(RESET)"
	@echo "$(YELLOW)Created: $(NAME)$(RESET)"

check: $(OBJS_CHECK)
	@$(AR) $(NAME) $(OBJS_CHECK)
	@$(LIB) $(NAME)
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Created: $(words $(OBJS_CHECK)) object file(s)$(RESET)"
	@echo "$(YELLOW)Created: $(NAME)$(RESET)"

gnl: $(OBJS_GNL) $(OBJS_STRING)
	@$(AR) $(NAME) $(OBJS_GNL) $(OBJS_STRING)
	@$(LIB) $(NAME)
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Created: $(words $(OBJS_GNL) $(OBJS_STRING)) object file(s)$(RESET)"
	@echo "$(YELLOW)Created: $(NAME)$(RESET)"

list: $(OBJS_LIST)
	@$(AR) $(NAME) $(OBJS_LIST)
	@$(LIB) $(NAME)
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Created: $(words $(OBJS_LIST)) object file(s)$(RESET)"
	@echo "$(YELLOW)Created: $(NAME)$(RESET)"

memory: $(OBJS_MEMORY)
	@$(AR) $(NAME) $(OBJS_MEMORY)
	@$(LIB) $(NAME)
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Created: $(words $(OBJS_MEMORY)) object file(s)$(RESET)"
	@echo "$(YELLOW)Created: $(NAME)$(RESET)"

print: $(OBJS_PRINT) $(OBJS_STRING)
	@$(AR) $(NAME) $(OBJS_PRINT) $(OBJS_STRING)
	@$(LIB) $(NAME)
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Created: $(words $(OBJS_PRINT) $(OBJS_STRING)) object file(s)$(RESET)"
	@echo "$(YELLOW)Created: $(NAME)$(RESET)"

string: $(OBJS_STRING)
	@$(AR) $(NAME) $(OBJS_STRING)
	@$(LIB) $(NAME)
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Created: $(words $(OBJS_STRING)) object file(s)$(RESET)"
	@echo "$(YELLOW)Created: $(NAME)$(RESET)"

clean:
	@$(RM) $(OBJS_CHECK) $(OBJS_GNL) $(OBJS_LIST) $(OBJS_MEMORY) $(OBJS_PRINT) $(OBJS_STRING) error.txt
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Removed: $(words $(OBJS_CHECK) $(OBJS_GNL) $(OBJS_LIST) $(OBJS_MEMORY) $(OBJS_PRINT) $(OBJS_STRING)) object file(s)$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(YELLOW)Removed: $(NAME)$(RESET)"

re: fclean all

.PHONY: all clean fclean re check gnl list memory print string
