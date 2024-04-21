NAME = a.out

SRC = 	main.cpp 	\
		AAnimal.cpp  \
		Dog.cpp     \
		Cat.cpp     \
		WrongAnimal.cpp  \
		WrongCat.cpp     \
		Brain.cpp

HEADERS = 	AAnimal.hpp  \
			Dog.hpp     \
			Cat.hpp     \
			WrongAnimal.hpp  \
			WrongCat.hpp     \
			Brain.hpp

OBJT_DIR = objt

OBJT = $(addprefix $(OBJT_DIR)/, $(patsubst %.cpp, %.o, $(SRC)))

C++ = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -D DEBUG=$(DEBUG) 

RM = rm -f

MAKEFLAGS += --quiet

# debug values inverted as the subject requires messages by default
ifdef DEBUG
	DEBUG = 0
else
	DEBUG = 1
endif

all: $(NAME)

$(NAME): $(OBJT)
	$(C++) $(CFLAGS) $(OBJT) -o $(NAME)

$(OBJT_DIR)/%.o: %.cpp $(HEADERS)
	mkdir -p $(@D)
	$(C++) $(CFLAGS) -c $< -o $@ 

run: $(NAME)
	./$(NAME)

rerun:	
	make re run
	
# debug values inverted as the subject requires messages by default
debug:
	make re DEBUG=0

clean:
		$(RM) -r $(OBJT_DIR)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re rerun run debug
