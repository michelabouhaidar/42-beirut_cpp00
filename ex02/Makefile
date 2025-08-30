NAME     := account
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := Account.cpp tests.cpp
OBJS := $(SRCS:.cpp=.o)

DEPS := Account.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
