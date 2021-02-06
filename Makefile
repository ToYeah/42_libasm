NAME=libasm.a
SRC_DIR=srcs
SRCS=\
ft_strlen.s\
ft_strcpy.s\
ft_strcmp.s\
ft_read.s\
ft_write.s\
ft_strdup.s


NASM=nasm
NASM_FLAG=-f elf64
AR=ar
ARFLAGS=crs
OBJS = $(addprefix $(SRC_DIR)/,$(SRCS:.s=.o))

all: $(NAME)

.s.o:
	$(NASM) $(NASM_FLAG) $<

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONEY	: all clean fclean re
