#   _ _ _      __ _
#  | (_) |__  / _| |_
#  | | | '_ \| |_| __|
#  | | | |_) |  _| |_
#  |_|_|_.__/|_|  \__|

# ─── VARIABLES ──────────────────────────────────────────────────────────────────

AT = @
LIBRARY	= libft.a
FLAGS	= -Wall -Werror -Wextra

DIR_SRCS = srcs
DIR_OBJS = objs
DIR_INCS = includes
O_FILES = $(C_FILES:.c=.o)
O_BONUS = $(C_BONUS:.c=.o)
INCLUDES := libft.h

SRCS = $(addprefix $(DIR_SRCS)/,$(C_FILES)) \
$(addprefix $(DIR_SRCS)/,$(C_BONUS))
OBJS = $(addprefix $(DIR_OBJS)/,$(O_FILES)) \
$(addprefix $(DIR_OBJS)/,$(O_BONUS))
INCS = $(addprefix $(DIR_INCS)/,$(INCLUDES))

# ─── FILES ──────────────────────────────────────────────────────────────────────

C_FILES = \
ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c	\
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \
ft_put_nbr_base.c \
ft_free.c

C_BONUS = \
	  ft_lstadd_front.c	\
	  ft_lstnew.c \
	  ft_lstsize.c \
	  ft_lstlast.c \
	  ft_lstadd_back.c \
	  ft_lstdelone.c \
	  ft_lstclear.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_lstprint.c\
	  ft_check_prev.c


# ─── COLORS ─────────────────────────────────────────────────────────────────────

ERASE	=	\033[2K\r
GREY	=	\033[30m
RED		=	\033[31m
GREEN	=	\033[32m
YELLOW	=	\033[33m
BLUE	=	\033[34m
PINK	=	\033[35m
CYAN	=	\033[36m
WHITE	=	\033[37m
BOLD	=	\033[1m
UNDER	=	\033[4m
SUR		=	\033[7m
END		=	\033[0m

# ─── RULES ──────────────────────────────────────────────────────────────────────
	
all: $(LIBRARY) 

$(LIBRARY): $(OBJS) $(SRCS)
	$(AT)-ar -rcs $(LIBRARY) $(OBJS)
	$(AT)-ranlib $(LIBRARY)
	@printf "$(ERASE)$(ERASE)$(BLUE)> Creating:$(BOLD)$(CYAN) $@ $(END)\n"

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c $(INCS) Makefile | $(DIR_OBJS)
	$(AT) $(CC) $(FLAGS) -I $(DIR_INCS) -c $< -o $@
	@printf "$(ERASE)$(ERASE)$(BLUE)> Creating: $(RED) $@ $(END)\n"

$(DIR_OBJS):
	$(AT)-mkdir -p $@ 
	
clean:
	@echo Removing object files
	$(AT)-rm -rf $(DIR_OBJS)	 

fclean: clean
	@echo Removing application
	$(AT)-rm -f $(LIBRARY)
re: fclean all	

.PHONY: all clean fclean
.DEFAULT: all