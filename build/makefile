
trig.o: bernoulli.h bernoulli.cpp
factorial.o: factorial.cpp factorial.h
main.o: main.cpp
OBJS = trig.o  factorial.o main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

p1 : $(OBJS)
    $(CC) $(LFLAGS) $(OBJS) -o p1
