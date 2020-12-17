NAME = libasm.a
AR = ar rcs
NA = nasm
NA_FLAGS = -f macho64

FLAGS = -Wall -Wextra -Werror
SRC  = ft_strlen.s \
	   ft_strcmp.s\
	   ft_strcpy.s \
	   ft_strdup.s\
	   ft_strlen.s

OBJECT = $(SRC:.s=.o)
%.o: %.s
	$(NA) $(NA_FLAGS)  $<
$(NAME): $(OBJECT)
	$(AR) $(NAME) $(OBJECT)

all: $(NAME)

clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)