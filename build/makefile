OBJS = main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)            

main.o : main.cpp factorial.cpp factorial.h bernoulli.h bernoulli.cpp trig.h trig.cpp definition.h include.h Zeta.cpp
    $(CC) $(CFLAGS) main.cpp
    

main : $(OBJS)
    $(CC) $(LFLAGS) $(OBJS) -o main
    
clean :
    \rm *.o *~ p1

tar :
    tar cfv p1.tar main.cpp factorial.cpp factorial.h bernoulli.h bernoulli.cpp trig.h trig.cpp definition.h include.h Zeta.cpp/
