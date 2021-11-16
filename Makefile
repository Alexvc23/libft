CC_VERBOSE = $(CC)
CC_NO_VERBOSE = @echo "Building $@..."; $(CC)

ifeq ($(VERBOSE),YES)
  V_CC = $(CC_VERBOSE)
  AT := 
else
  V_CC = $(CC_NO_VERBOSE)
  AT := @
endif

LIBRARY	= libft.a
C_PATH  = ./
C_FILES = $(wildcard $(C_PATH)/*.c)
O_FILES = $(C_FILES:$(C_PATH)/%.c=$(C_PATH)/%.o)
INCLUDES = -I libft.h 

.PHONY: all clean
.DEFAULT: all

all: $(LIBRARY) 

$(LIBRARY): $(O_FILES)
	@echo creating library	
	@ar -rcs $(LIBRARY) $(O_FILES)
	@ranlib $(LIBRARY)

$(C_PATH)/%.o: $(C_PATH)/%.c
	$(V_CC) -c $(INCLUDES) $< -o $@
clean:
	$echo Removing object files	
fclean:
	@echo Removing object files
	$(AT)-rm -f $(C_PATH)/*.o	 
	@echo Removing application
	$(AT)-rm -f $(LIBRARY) 

re: fclean all	
