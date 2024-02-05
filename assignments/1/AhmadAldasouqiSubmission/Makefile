# OpenGL Makefile

CC = clang++
CFLAGS = -Wall -std=c++11 -Wno-deprecated
LIBS = -framework OpenGL -framework GLUT

SRCS = opengl.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = prog

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC) $(LIBS)
	rm -f $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXEC)
