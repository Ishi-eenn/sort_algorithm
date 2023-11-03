NAME = sort
INSERT_SRCS	=	main.c insertion_sort.c
INSERT_OBJS	=	$(INSERT_SRCS:%.c=$(OBJDIR)%.o)
INSERT_NAME	=	insert

SELECT_SRCS	=	main.c selection_sort.c
SELECT_OBJS	=	$(SELECT_SRCS:%.c=$(OBJDIR)%.o)
SELECT_NAME	=	select

MERGE_SRCS	=	main.c merge_sort.c
MERGE_OBJS	=	$(MERGE_SRCS:%.c=$(OBJDIR)%.o)
MERGE_NAME	=	merge

QUICK_SRCS	=	main.c quick_sort.c
QUICK_OBJS	=	$(QUICK_SRCS:%.c=$(OBJDIR)%.o)
QUICK_NAME	=	quick

QUICK_RANDOM_SRCS	=	main.c quick_random_sort.c
QUICK_RANDOM_OBJS	=	$(QUICK_SRCS:%.c=$(OBJDIR)%.o)
QUICK_RANDOM_NAME	=	quick_random

OBJDIR = objs/
CC = gcc
RM = rm -rf

all : $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir objs

$(OBJDIR)%.o: %.c
	$(CC) -o $@ -c $<

$(NAME): $(INSERT_NAME) $(SELECT_NAME) $(MERGE_NAME) $(QUICK_NAME) $(QUICK_RANDOM_NAME)

$(INSERT_NAME): $(INSERT_OBJS)
	$(CC) $^ -o $@

$(SELECT_NAME): $(SELECT_OBJS)
	$(CC) $^ -o $@

$(MERGE_NAME): $(MERGE_OBJS)
	$(CC) $^ -o $@

$(QUICK_NAME): $(QUICK_OBJS)
	$(CC) $^ -o $@

$(QUICK_RANDOM_NAME): $(QUICK_RANDOM_OBJS)
	$(CC) $^ -o $@

test: all
	$(RM) $(INSERT_NAME).log $(SELECT_NAME).log $(MERGE_NAME).log $(QUICK_NAME).log $(QUICK_RANDOM_NAME).log
	bash test.sh
	python3 sum.py

clean :
	$(RM) $(OBJDIR)
	$(RM) $(INSERT_NAME).log $(SELECT_NAME).log $(MERGE_NAME).log $(QUICK_NAME).log $(QUICK_RANDOM_NAME).log

fclean : clean
	$(RM) $(INSERT_NAME) $(SELECT_NAME) $(MERGE_NAME) $(QUICK_NAME) $(QUICK_RANDOM_NAME)

re : fclean all

.PHONY : all test clean fclean re
