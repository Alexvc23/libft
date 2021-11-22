V_CC = @echo "Building $@..."; $(CC)
AT = @

LIBRARY	= libft.a
FLAGS	= -Wall -Werror -Wextra
C_LIBFT = \
	./ft_memset.c	\
	./ft_bzero.c	\
	./ft_memcpy.c	\
	./ft_memmove.c	\
	./ft_memchr.c	\
	./ft_memcmp.c	\
	./ft_calloc.c	\
	./ft_strlen.c	\
	./ft_strlcpy.c	\
	./ft_strlcat.c	\
	./ft_strchr.c	\
	./ft_strrchr.c	\
	./ft_strncmp.c	\
	./ft_strnstr.c	\
	./ft_strdup.c	\
	./ft_isdigit.c	\
	./ft_atoi.c	\
	./ft_isalpha.c	\
	./ft_isalnum.c	\
	./ft_isascii.c	\
	./ft_isprint.c	\
	./ft_toupper.c	\
	./ft_tolower.c  \
	./ft_substr.c	\
	./ft_strjoin.c	\
	./ft_strtrim.c	\
	./ft_split.c	\
	./ft_itoa.c	\
	./ft_strmapi.c	\
	./ft_putchar_fd.c\
	./ft_putstr_fd.c\
	./ft_putendl_fd.c\
	./ft_putnbr_fd.c

C_BONUS = \
	  ./ft_lstadd_front.c \
	  ./ft_lstnew.c		\
	  ./ft_lstsize.c	\
	  ./ft_lstlast.c	\
	  ./ft_lstadd_back.c \
	  ./ft_lstdelone.c	\
	  ./ft_lstclear.c	\
	  ./ft_lstiter.c

O_FILES = $(C_LIBFT:.c=.o)
O_BONUS = $(C_BONUS:.c=.o)
	INCLUDES = libft.h 

all: $(LIBRARY) 

$(LIBRARY): $(O_FILES)
	@echo creating library	
	$(AT)-ar -rcs $(LIBRARY) $(O_FILES) $(INCLUDES)
	$(AT)-ranlib $(LIBRARY)

%.o: %.c
	$(V_CC) -c $(FLAGS) $< -o $@
	
bonus: $(O_BONUS) $(O_FILES)
	$(AT)-ar -rcs $(LIBRARY) $^ 
	$(AT)-ranlib $(LIBRARY)
clean:
	@echo Removing object files
	$(AT)-rm -f *.o	 
fclean:
	@echo Removing object files
	$(AT)-rm -f *.o	 
	@echo Removing application
	$(AT)-rm -f $(LIBRARY)

re: fclean all	

.PHONY: all clean fclean
.DEFAULT: all
